#include <stdlib.h>

// The devices to init for Xperia Z2/Z3
const char *mr_init_devices[] = {
	// framebuffer device
	"/sys/class/graphics/fb0",

	// storage devices
	"/sys/dev/block*",
	"/sys/block/mmcblk0",
	"/sys/module/mmc_core",
	"/sys/module/mmcblk",

	// input
	"/sys/class/misc/uinput",
	"/sys/class/input/input0",
	"/sys/class/input/input1",
	"/sys/class/input/input2",
	"/sys/class/input/input3",
	"/sys/class/input/input9",
	"/sys/class/input/event0",
	"/sys/class/input/event1",
	"/sys/class/input/event2",
	"/sys/class/input/event3",
	"/sys/class/input/event9",

	// adb
	"/sys/class/tty/ptmx",
	"/sys/class/misc/android_adb",
	"/sys/class/android_usb/android0/f_adb",

	"/sys/bus*",
	"/sys/devices*",

	NULL
};