/*
 * util.c
 *
 * some general memory functions
 *
 * a Net::DNS like library for C
 *
 * (c) NLnet Labs, 2004
 *
 * See the file LICENSE for the license
 */

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

#include "prototype.h"

void *
xmalloc(size_t s)
{
	void *p;
	
	p = (void*)malloc(s);

	return p;
}

/* put this here tmp. for debugging */
void
xprintf_rd(rdata_t *rd)
{
	/* assume printable string */
	fprintf(stdout, "size\t:%u\n", (unsigned int)rd_size(rd));
	fprintf(stdout, "type\t:%u\n", (unsigned int)rd_type(rd));
	fprintf(stdout, "data\t:[%.*s]\n", (int)rd_size(rd), (char*)rd_data(rd));
}
