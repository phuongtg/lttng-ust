#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER ust_tests_fork

#if !defined(_TRACEPOINT_UST_TESTS_FORK_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _TRACEPOINT_UST_TESTS_FORK_H

/*
 * Copyright (C) 2011  Mathieu Desnoyers <mathieu.desnoyers@efficios.com>
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

#include <lttng/tracepoint.h>
#include <sys/types.h>

TRACEPOINT_EVENT(ust_tests_fork, before_fork,
	TP_ARGS(),
	TP_FIELDS()
)

TRACEPOINT_EVENT(ust_tests_fork, after_fork_child,
	TP_ARGS(pid_t, pid),
	TP_FIELDS(
		ctf_integer(pid_t, pid, pid)
	)
)

TRACEPOINT_EVENT(ust_tests_fork, after_fork_parent,
	TP_ARGS(),
	TP_FIELDS()
)

TRACEPOINT_EVENT(ust_tests_fork, after_exec,
	TP_ARGS(),
	TP_FIELDS()
)

#endif /* _TRACEPOINT_UST_TESTS_FORK_H */

#undef TRACEPOINT_INCLUDE_FILE
#define TRACEPOINT_INCLUDE_FILE ./ust_tests_fork.h

/* This part must be outside ifdef protection */
#include <lttng/tracepoint-event.h>
