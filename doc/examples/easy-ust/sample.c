/*
 * Copyright (C) 2011-2012  Matthew Khouzam <matthew.khouzam@ericsson.com> 
 * Copyright (C) 2012  Mathieu Desnoyers <mathieu.desnoyers@efficios.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 */
 
#include <unistd.h>

/*
 * We need to define TRACEPOINT_DEFINE in one C file in the program
 * before including provider headers.
 */
#define TRACEPOINT_DEFINE
#include "sample_component_provider.h"

int main(int argc, char **argv)
{
	int i = 0;

	for (i = 0; i < 100000; i++) {
		tracepoint(sample_component, message, "Hello World");
		usleep(1);
	}
	return 0;
}
