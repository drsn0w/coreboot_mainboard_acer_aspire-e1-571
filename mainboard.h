/*
 * "The way things are connected" and a few setup options
 *
 * Copyright (C) 2014 Alexandru Gagniuc <mr.nuke.me@gmail.com>
 * Subject to the GNU GPL v2, or (at your option) any later version.
 */

#ifndef _MAINBOARD_ACER_ASPIRE_E1_571_MAINBOARD_H
#define _MAINBOARD_ACER_ASPIRE_E1_571_MAINBOARD_H

/* What is connected to GEVENT pins */
#define EC_SCI_GEVENT		3
#define EC_LID_GEVENT		22
#define EC_SMI_GEVENT		23
#define PCIE_GEVENT		8

/* Any GEVENT pin can be mapped to any GPE. We try to keep the mapping 1:1, but
 * we make the distinction between GEVENT pin and SCI.
 */
#define EC_SCI_GPE 		EC_SCI_GEVENT
#define EC_LID_GPE		EC_LID_GEVENT
#define PME_GPE			0x0b
#define PCIE_GPE		0x18

/* Enable PS/2 Keyboard and Mouse */
#define SIO_EC_ENABLE_PS2K

#endif /* _MAINBOARD_ACER_ASPIRE_E1_571_MAINBOARD_H   */
