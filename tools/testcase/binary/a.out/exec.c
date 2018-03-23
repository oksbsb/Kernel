/*
 * exec.c
 *
 * (C) 2018.03 BiscuitOS <buddy.zhang@aliyun.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <linux/kernel.h>

int d_do_execve(unsigned long *eip, long tmp, char *filename,
              char **argv, char **envp)
{
    if ((0xffff & eip[1]) != 0x000f)
        panic("exec called from superisor mode");
    return 0;
}
