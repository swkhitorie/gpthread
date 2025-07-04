/****************************************************************************
 *
 *   Copyright (c) 2016 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/**
 * @file sem.h
 *
 * Synchronization primitive: Semaphore
 */

/************************************************************
 * px4 sem interface
 * 1. RTOS (Implemented internally according to the POSIX standard)
 * 2. Posix (realize PC-like)
 ***********************************************************/
#pragma once

#include <semaphore.h>

#define SEM_PRIO_NONE             0
#define SEM_PRIO_INHERIT          1
#define SEM_PRIO_PROTECT          2

/* except for Nuttx, 
 * other os do not have semaphore priority settings
 */
#define sem_setprotocol(s,p)

typedef sem_t px4_sem_t;

#define px4_sem_init		sem_init
#define px4_sem_setprotocol	sem_setprotocol
#define px4_sem_wait		sem_wait
#define px4_sem_trywait		sem_trywait
#define px4_sem_post		sem_post
#define px4_sem_getvalue	sem_getvalue
#define px4_sem_destroy		sem_destroy
#define px4_sem_timedwait	sem_timedwait
