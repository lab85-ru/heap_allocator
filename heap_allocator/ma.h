#ifndef MA_H_
#define MA_H_

#include <stdint.h>
#include "ma_cfg.h"

#define MA_MARK_FREE 0  // маркер память свободна
#define MA_MARK_BUSY 1  // маркер память занята

typedef union type_size {
	uint32_t typesize;
	struct {
	    uint32_t size:17;  // количество страниц входящих в блок
        uint32_t pusto:13; // не задействованые биты
	    uint32_t mark:1;   // бит =1-занята =0 сбободна память.
	};
}type_size;

typedef struct ma_mcb_t {
    uint16_t prev_mcb;  // указывает на номер предыдущего блока ma_mcb_t
	uint16_t next_mcb;  // указывает на номер следующего блока ma_mcb_t
    type_size ts;       // количество станиц + самый старший бит =1-занята =0 сбободна память.
} ma_mcb_t;

void ma_init( void );
void * ma_malloc( size_t size );
void ma_free( void *ptr  );
void ma_view( void );

#endif