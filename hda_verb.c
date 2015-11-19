#include <device/azalia_device.h>

const u32 cim_verb_data[] = {
	0x10ec0269, /* Codec Vendor / Device ID: Realtek */
	0x1025064b, /* Subsystem ID */

	0x0000000b, /* Number of 4 dword sets */
	/* NID 0x01: Subsystem ID.  */
	AZALIA_SUBVENDOR(0x0, 0x1025064b),

	/* NID 0x12.  */
	AZALIA_PIN_CFG(0x0, 0x12, 0x411111f0),

	/* NID 0x14.  */
	AZALIA_PIN_CFG(0x0, 0x14, 0x99130110),

	/* NID 0x17.  */
	AZALIA_PIN_CFG(0x0, 0x17, 0x411111f0),

	/* NID 0x18.  */
	AZALIA_PIN_CFG(0x0, 0x18, 0x03a19830),

	/* NID 0x19.  */
	AZALIA_PIN_CFG(0x0, 0x19, 0x411111f0),

	/* NID 0x1a.  */
	AZALIA_PIN_CFG(0x0, 0x1a, 0x411111f0),

	/* NID 0x1b.  */
	AZALIA_PIN_CFG(0x0, 0x1b, 0x99a30920),

	/* NID 0x1d.  */
	AZALIA_PIN_CFG(0x0, 0x1d, 0x598301f0),

	/* NID 0x1e.  */
	AZALIA_PIN_CFG(0x0, 0x1e, 0x411111f0),

	/* NID 0x21.  */
	AZALIA_PIN_CFG(0x0, 0x21, 0x0321101f),
	0x80862806, /* Codec Vendor / Device ID: Intel */
	0x80860101, /* Subsystem ID */

	0x00000004, /* Number of 4 dword sets */
	/* NID 0x01: Subsystem ID.  */
	AZALIA_SUBVENDOR(0x3, 0x80860101),

	/* NID 0x05.  */
	AZALIA_PIN_CFG(0x3, 0x05, 0x18560010),

	/* NID 0x06.  */
	AZALIA_PIN_CFG(0x3, 0x06, 0x58560020),

	/* NID 0x07.  */
	AZALIA_PIN_CFG(0x3, 0x07, 0x58560030),
};

const u32 pc_beep_verbs[0] = {};

AZALIA_ARRAY_SIZES;
