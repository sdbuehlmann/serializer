/*
 * bldcDriverSerializer_operator.h
 *
 *  Created on: Jul 23, 2018
 *      Author: simon
 */

#ifndef INC_BLDCDRIVERSERIALIZER_OPERATOR_H_
#define INC_BLDCDRIVERSERIALIZER_OPERATOR_H_

#include "serializerConfig.h"

// ____RX____ (if supported, functions has to be implemented from user)
#ifdef OPERATOR_RX
void enableSerialOperationgMode();
void enableLogging();
void enableDriver();
void disableDriver();
void selectPositiveTorque();
void selectNegativeTorque();
void rotadeClockwise();
void rotadeCounterclockwise();
void getObservingInfos();
void getLoggingConfig();

void setPositiveTorqueLevel(uint8_t level);
void setNegativeTorqueLevel(uint8_t level);
void setMaxPhaseCurrent(uint8_t current);

void setTiming(uint8_t timing);
void setRotorPosController_pParam(uint32_t pParam);
void setRotorPosController_iParam(uint32_t iParam);
void setLoggingConfig(uint32_t config);
#endif

#ifdef OPERATOR_TX

// ____TX____
void startOperatorPackage();

void add_enableSerialOperatingMode();
void add_enableLogging();
void add_EnableDriver();
void add_DisableDriver();
void add_SelectPositiveTorque();
void add_SelectNegativeTorque();
void add_rotadeClockwise();
void add_rotadeCounterclockwise();
void add_getObservingInfos();
void add_getLoggingConfig();

void add_SetPositiveTorqueLevel(uint8_t level);
void add_SetNegativeTorqueLevel(uint8_t level);
void add_SetMaxPhaseCurrent(uint8_t level);

void add_SetTiming(uint8_t timing);
void add_SetRotorPosController_pParam(uint32_t pParam);
void add_SetRotorPosController_iParam(uint32_t iParam);
void add_setLoggingConfig(uint32_t config);
#endif


#endif /* INC_BLDCDRIVERSERIALIZER_OPERATOR_H_ */
