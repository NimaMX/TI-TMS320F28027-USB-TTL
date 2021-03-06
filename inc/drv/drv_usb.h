/*
 *  drv_usb.h
 *
 *  Created on: Jan 5, 2021
 *      Author: Nima Mohammadi
 */

#ifndef INC_DRV_DRV_USB_H_
#define INC_DRV_DRV_USB_H_

#include <drv/drv_base.h>
#include "Utils.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 *
 */
result_t usbInit(void);

/**
 *
 */
result_t usbWriteData(char *data, uint16_t size);

/**
 *
 */
result_t usbReadData(uint16_t *data);


#ifdef __cplusplus
}
#endif

#endif /* INC_DRV_DRV_USB_H_ */
