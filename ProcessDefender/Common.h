#pragma once

#define MAX_PATH 260
#define DRIVER_NAME L"ProcessDefender"
#define IOCTL_UPDATE_PROCESS_DEFENDER \
	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0800, METHOD_BUFFERED, FILE_ANY_ACCESS)

typedef struct {
	BOOLEAN isActive;
	CHAR protectedProcess[MAX_PATH];
} PROCESS_DEFENDER_OBJECT, *PPROCESS_DEFENDER_OBJECT;
