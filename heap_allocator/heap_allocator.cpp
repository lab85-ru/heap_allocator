// MAator.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <stdio.h>
#include "ma.h"


int main(int argc, char* argv[])
{
	void *n0 = NULL;
	void *n1 = NULL;
	void *n2 = NULL;
	void *n3 = NULL;
	void *n4 = NULL;
	void *n5 = NULL;
	void *n6 = NULL;
	void *n7 = NULL;

	printf("\r\n================================================================\r\n");
	printf("  Heap Allocator v0.1 2017 \r\n");

	printf("Init\r\n");
	ma_init();
	ma_view();
/*
	printf("================================================================\r\n");
	printf("ma_malloc( 128 ) : ");
	n0 = ma_malloc( 128 );
	if (n0 == NULL){
		printf("ERROR\r\n");
		return 1;
	} else printf("OK\r\n");

	ma_view();
	printf("================================================================\r\n");
*/
	printf("================================================================\r\n");

	printf("ma_malloc( MA_PAGE_SIZE ) : ");
	n0 = ma_malloc( MA_PAGE_SIZE );
	if (n0 == NULL){
		printf("ERROR\r\n");
		return 1;
	} else printf("OK\r\n");

	printf("ma_malloc( MA_PAGE_SIZE ) : ");
	n1 = ma_malloc( MA_PAGE_SIZE );
	if (n1 == NULL){
		printf("ERROR\r\n");
		return 1;
	} else printf("OK\r\n");

	printf("ma_malloc( MA_PAGE_SIZE ) : ");
	n2 = ma_malloc( MA_PAGE_SIZE );
	if (n2 == NULL){
		printf("ERROR\r\n");
		return 1;
	} else printf("OK\r\n");

	printf("ma_malloc( MA_PAGE_SIZE ) : ");
	n3 = ma_malloc( MA_PAGE_SIZE );
	if (n3 == NULL){
		printf("ERROR\r\n");
		return 1;
	} else printf("OK\r\n");

	printf("ma_malloc( MA_PAGE_SIZE ) : ");
	n4 = ma_malloc( MA_PAGE_SIZE );
	if (n4 == NULL){
		printf("ERROR\r\n");
		return 1;
	} else printf("OK\r\n");

	printf("ma_malloc( MA_PAGE_SIZE ) : ");
	n5 = ma_malloc( MA_PAGE_SIZE );
	if (n5 == NULL){
		printf("ERROR\r\n");
		return 1;
	} else printf("OK\r\n");


	ma_view();
	printf("================================================================\r\n");

	//printf("================================================================\r\n");
	//ma_free( n0 );
	//ma_view();
	//printf("================================================================\r\n");
//return 0;
	printf("================================================================\r\n");
	ma_free( n1 );
	ma_view();
	printf("================================================================\r\n");
//return 0;
	printf("================================================================\r\n");
	ma_free( n2 );
	ma_view();
	printf("================================================================\r\n");

	printf("================================================================\r\n");
	ma_free( n3 );
	ma_view();
	printf("================================================================\r\n");

	printf("================================================================\r\n");
	ma_free( n4 );
	ma_view();
	printf("================================================================\r\n");

	//printf("================================================================\r\n");
	//ma_free( n5 );
	//ma_view();
	//printf("================================================================\r\n");

	printf("================================================================\r\n");
	ma_free( n0 );
	ma_view();
	printf("================================================================\r\n");


	printf("================================================================\r\n");
	printf("ma_malloc( MA_PAGE_SIZE ) : ");
	n0 = ma_malloc( 5 * MA_PAGE_SIZE );
	if (n0 == NULL){
		printf("ERROR\r\n");
		return 1;
	} else printf("OK\r\n");
	ma_view();
	printf("================================================================\r\n");

	printf("================================================================\r\n");
	printf("ma_malloc( MA_PAGE_SIZE ) : ");
	n6 = ma_malloc( 5 * MA_PAGE_SIZE );
	if (n6 == NULL){
		printf("ERROR\r\n");
		return 1;
	} else printf("OK\r\n");
	ma_view();
	printf("================================================================\r\n");


	printf("================================================================\r\n");
	ma_free( n0 );
	ma_view();
	printf("================================================================\r\n");

	printf("================================================================\r\n");
	ma_free( n5 );
	ma_view();
	printf("================================================================\r\n");

	printf("================================================================\r\n");
	ma_free( n6 );
	ma_view();
	printf("================================================================\r\n");

	printf("================================================================\r\n");
	printf("ma_malloc( 16 * MA_PAGE_SIZE ) : ");
	n6 = ma_malloc( 16 * MA_PAGE_SIZE );
	if (n6 == NULL){
		printf("ERROR\r\n");
		return 1;
	} else printf("OK\r\n");
	ma_view();
	printf("================================================================\r\n");

	printf("================================================================\r\n");
	ma_free( n6 );
	ma_view();
	printf("================================================================\r\n");



	printf("ma_malloc( MA_PAGE_SIZE ) : ");
	n0 = ma_malloc( MA_PAGE_SIZE );
	if (n0 == NULL){
		printf("ERROR\r\n");
		return 1;
	} else printf("OK\r\n");

	printf("ma_malloc( MA_PAGE_SIZE ) : ");
	n1 = ma_malloc( MA_PAGE_SIZE );
	if (n1 == NULL){
		printf("ERROR\r\n");
		return 1;
	} else printf("OK\r\n");

	printf("ma_malloc( MA_PAGE_SIZE ) : ");
	n2 = ma_malloc( MA_PAGE_SIZE );
	if (n2 == NULL){
		printf("ERROR\r\n");
		return 1;
	} else printf("OK\r\n");

	printf("ma_malloc( MA_PAGE_SIZE ) : ");
	n3 = ma_malloc( MA_PAGE_SIZE );
	if (n3 == NULL){
		printf("ERROR\r\n");
		return 1;
	} else printf("OK\r\n");

	printf("ma_malloc( MA_PAGE_SIZE ) : ");
	n4 = ma_malloc( MA_PAGE_SIZE );
	if (n4 == NULL){
		printf("ERROR\r\n");
		return 1;
	} else printf("OK\r\n");

	printf("================================================================\r\n");
	ma_view();
	printf("================================================================\r\n");

	printf("ma_malloc( 11 * MA_PAGE_SIZE ) : ");
	n5 = ma_malloc( 11 * MA_PAGE_SIZE );
	if (n5 == NULL){
		printf("ERROR\r\n");
		return 1;
	} else printf("OK\r\n");

	printf("================================================================\r\n");
	ma_view();
	printf("================================================================\r\n");




	return 0;
}

