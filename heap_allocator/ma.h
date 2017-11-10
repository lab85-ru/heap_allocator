#ifndef MA_H_
#define MA_H_

#include <stdint.h>
#include "ma_cfg.h"

#define MA_MARK_FREE 0  // ������ ������ ��������
#define MA_MARK_BUSY 1  // ������ ������ ������

typedef union type_size {
	uint32_t typesize;
	struct {
	    uint32_t size:17;  // ���������� ������� �������� � ����
        uint32_t pusto:13; // �� �������������� ����
	    uint32_t mark:1;   // ��� =1-������ =0 �������� ������.
	};
}type_size;

typedef struct ma_mcb_t {
    uint16_t prev_mcb;  // ��������� �� ����� ����������� ����� ma_mcb_t
	uint16_t next_mcb;  // ��������� �� ����� ���������� ����� ma_mcb_t
    type_size ts;       // ���������� ������ + ����� ������� ��� =1-������ =0 �������� ������.
} ma_mcb_t;

void ma_init( void );
void * ma_malloc( size_t size );
void ma_free( void *ptr  );
void ma_view( void );

#endif