#include <stdint.h>
#include <string.h>
#include <lib.h>
#include <timestamp.h>
#include <arch/byteorder.h>
#include <arch/io.h>
#include <device/pci_def.h>
#include <device/pnp_def.h>
#include <cpu/x86/lapic.h>
#include <arch/acpi.h>
#include <console/console.h>
#include "northbridge/intel/sandybridge/sandybridge.h"
#include "northbridge/intel/sandybridge/raminit_native.h"
#include "southbridge/intel/bd82x6x/pch.h"
#include "southbridge/intel/bd82x6x/gpio.h"
#include <arch/cpu.h>
#include <cpu/x86/msr.h>

void pch_enable_lpc(void)
{
	pci_write_config16(PCI_DEV(0, 0x1f, 0), 0x82, 0x3f03);
	pci_write_config32(PCI_DEV(0, 0x1f, 0), 0x84, 0x00000000);
	pci_write_config32(PCI_DEV(0, 0x1f, 0), 0x88, 0x0004fd61);
	pci_write_config32(PCI_DEV(0, 0x1f, 0), 0x8c, 0x00040069);
	pci_write_config32(PCI_DEV(0, 0x1f, 0), 0x90, 0x00000000);
	pci_write_config16(PCI_DEV(0, 0x1f, 0), 0x80, 0x0010);
	pci_write_config32(PCI_DEV(0, 0x1f, 0), 0xac, 0x80000000);
}

void rcba_config(void)
{
	/* Disable devices.  */
	RCBA32(0x3414) = 0x00000020;
	RCBA32(0x3418) = 0x1ffe1fe3;

}
const struct southbridge_usb_port mainboard_usb_ports[] = {
	{ 1, 1, 0 },
	{ 1, 1, 1 },
	{ 1, 1, 1 },
	{ 0, 1, 1 },
	{ 0, 0, 2 },
	{ 0, 0, 2 },
	{ 0, 0, 3 },
	{ 0, 0, 3 },
	{ 1, 1, 4 },
	{ 1, 1, 4 },
	{ 1, 0, 5 },
	{ 1, 0, 5 },
	{ 0, 1, 6 },
	{ 1, 1, 6 },
};

/* FIXME: Put proper SPD map here. */
void mainboard_get_spd(spd_raw_data *spd)
{
	read_spd(&spd[0], 0x50);
	read_spd(&spd[1], 0x51);
	read_spd(&spd[2], 0x52);
	read_spd(&spd[3], 0x53);
}
