#include "memfault/components.h"

void memfault_platform_get_device_info(struct MemfaultDeviceInfo *info) {
  *info = (struct MemfaultDeviceInfo){
    .device_serial = "testserial",
    .hardware_version = "mp",
    .software_version = "0.0.1",
    .software_type = "app",
  };
}