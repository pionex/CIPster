/*******************************************************************************
 * Copyright (c) 2009, Rockwell Automation, Inc.
 * All rights reserved.
 *
 ******************************************************************************/
#ifndef OPENER_CIPASSEMBLY_H_
#define OPENER_CIPASSEMBLY_H_

#include "typedefs.h"
#include "ciptypes.h"

//* @brief Assembly Class Code
static const int kCipAssemblyClassCode = 0x04;

// public functions

/** @brief Setup the Assembly object
 *
 * Creates the Assembly Class with zero instances and sets up all services.
 *
 * @return Returns kEipStatusOk if assembly object was successfully created, otherwise kEipStatusError
 */
EipStatus CipAssemblyInitialize();


/** @brief notify an Assembly object that data has been received for it.
 *
 *  The data will be copied into the assembly instance's attribute 3 and
 *  the application will be informed with the IApp_after_assembly_data_received function.
 *
 *  @param instance the assembly object instance for which the data was received
 *  @param data pointer to the data received
 *  @param data_length number of bytes received
 *  @return
 *     - EIP_OK the received data was okay
 *     - EIP_ERROR the received data was wrong
 */
EipStatus NotifyAssemblyConnectedDataReceived(CipInstance *instance,
                                              EipUint8 *data,
                                              EipUint16 data_length);

#endif // OPENER_CIPASSEMBLY_H_
