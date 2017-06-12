/*
* EEZ PSU Firmware
* Copyright (C) 2017-present, Envox d.o.o.
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.

* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.

* You should have received a copy of the GNU General Public License
* along with this program.  If not, see http://www.gnu.org/licenses.
*/

#pragma once

#define SCPI_COMMANDS \
    SCPI_COMMAND("APPLy", scpi_cmd_apply) \
    SCPI_COMMAND("APPLy?", scpi_cmd_applyQ) \
    SCPI_COMMAND("CALibration[:MODE]", scpi_cmd_calibrationMode) \
    SCPI_COMMAND("CALibration[:MODE]?", scpi_cmd_calibrationModeQ) \
    SCPI_COMMAND("CALibration:CLEar", scpi_cmd_calibrationClear) \
    SCPI_COMMAND("CALibration:CURRent[:DATA]", scpi_cmd_calibrationCurrentData) \
    SCPI_COMMAND("CALibration:CURRent:LEVel", scpi_cmd_calibrationCurrentLevel) \
    SCPI_COMMAND("CALibration:CURRent:RANGe", scpi_cmd_calibrationCurrentRange) \
    SCPI_COMMAND("CALibration:PASSword:NEW", scpi_cmd_calibrationPasswordNew) \
    SCPI_COMMAND("CALibration:REMark", scpi_cmd_calibrationRemark) \
    SCPI_COMMAND("CALibration:REMark?", scpi_cmd_calibrationRemarkQ) \
    SCPI_COMMAND("CALibration:SAVE", scpi_cmd_calibrationSave) \
    SCPI_COMMAND("CALibration:STATe", scpi_cmd_calibrationState) \
    SCPI_COMMAND("CALibration:STATe?", scpi_cmd_calibrationStateQ) \
    SCPI_COMMAND("CALibration:VOLTage[:DATA]", scpi_cmd_calibrationVoltageData) \
    SCPI_COMMAND("CALibration:VOLTage:LEVel", scpi_cmd_calibrationVoltageLevel) \
    SCPI_COMMAND("*CLS", scpi_cmd_coreCls) \
    SCPI_COMMAND("*ESE", scpi_cmd_coreEse) \
    SCPI_COMMAND("*ESE?", scpi_cmd_coreEseQ) \
    SCPI_COMMAND("*ESR?", scpi_cmd_coreEsrQ) \
    SCPI_COMMAND("*IDN?", scpi_cmd_coreIdnQ) \
    SCPI_COMMAND("*OPC", scpi_cmd_coreOpc) \
    SCPI_COMMAND("*OPC?", scpi_cmd_coreOpcQ) \
    SCPI_COMMAND("*RCL", scpi_cmd_coreRcl) \
    SCPI_COMMAND("*RST", scpi_cmd_coreRst) \
    SCPI_COMMAND("*SAV", scpi_cmd_coreSav) \
    SCPI_COMMAND("*SRE", scpi_cmd_coreSre) \
    SCPI_COMMAND("*SRE?", scpi_cmd_coreSreQ) \
    SCPI_COMMAND("*STB?", scpi_cmd_coreStbQ) \
    SCPI_COMMAND("*TST?", scpi_cmd_coreTstQ) \
    SCPI_COMMAND("*WAI", scpi_cmd_coreWai) \
    SCPI_COMMAND("DEBUG", scpi_cmd_debug) \
    SCPI_COMMAND("DEBUG?", scpi_cmd_debugQ) \
    SCPI_COMMAND("DEBUG:WDOG", scpi_cmd_debugWdog) \
    SCPI_COMMAND("DEBUG:WDOG?", scpi_cmd_debugWdogQ) \
    SCPI_COMMAND("DEBUG:ONTime?", scpi_cmd_debugOntimeQ) \
    SCPI_COMMAND("DEBUG:DIR?", scpi_cmd_debugDirQ) \
    SCPI_COMMAND("DEBUG:FILE?", scpi_cmd_debugFileQ) \
    SCPI_COMMAND("DEBUG:VOLTage", scpi_cmd_debugVoltage) \
    SCPI_COMMAND("DEBUG:CURRent", scpi_cmd_debugCurrent) \
    SCPI_COMMAND("DEBUG:MEASure:VOLTage", scpi_cmd_debugMeasureVoltage) \
    SCPI_COMMAND("DEBUG:MEASure:CURRent", scpi_cmd_debugMeasureCurrent) \
    SCPI_COMMAND("DIAGnostic[:INFOrmation]:ADC?", scpi_cmd_diagnosticInformationAdcQ) \
    SCPI_COMMAND("DIAGnostic[:INFOrmation]:CALibration?", scpi_cmd_diagnosticInformationCalibrationQ) \
    SCPI_COMMAND("DIAGnostic[:INFOrmation]:PROTection?", scpi_cmd_diagnosticInformationProtectionQ) \
    SCPI_COMMAND("DIAGnostic[:INFOrmation]:TEST?", scpi_cmd_diagnosticInformationTestQ) \
    SCPI_COMMAND("DIAGnostic[:INFOrmation]:FAN?", scpi_cmd_diagnosticInformationFanQ) \
    SCPI_COMMAND("INSTrument[:SELect]", scpi_cmd_instrumentSelect) \
    SCPI_COMMAND("INSTrument[:SELect]?", scpi_cmd_instrumentSelectQ) \
    SCPI_COMMAND("INSTrument:NSELect", scpi_cmd_instrumentNselect) \
    SCPI_COMMAND("INSTrument:NSELect?", scpi_cmd_instrumentNselectQ) \
    SCPI_COMMAND("INSTrument:COUPle:TRACking", scpi_cmd_instrumentCoupleTracking) \
    SCPI_COMMAND("INSTrument:COUPle:TRACking?", scpi_cmd_instrumentCoupleTrackingQ) \
    SCPI_COMMAND("INSTrument:DISPlay:TRACe#", scpi_cmd_instrumentDisplayTrace) \
    SCPI_COMMAND("INSTrument:DISPlay:TRACe#?", scpi_cmd_instrumentDisplayTraceQ) \
    SCPI_COMMAND("INSTrument:DISPlay:TRACe:SWAP", scpi_cmd_instrumentDisplayTraceSwap) \
    SCPI_COMMAND("INSTrument:DISPlay:YT:RATE", scpi_cmd_instrumentDisplayYtRate) \
    SCPI_COMMAND("INSTrument:DISPlay:YT:RATE?", scpi_cmd_instrumentDisplayYtRateQ) \
    SCPI_COMMAND("MEASure[:SCALar][:VOLTage][:DC]?", scpi_cmd_measureScalarVoltageDcQ) \
    SCPI_COMMAND("MEASure[:SCALar]:CURRent[:DC]?", scpi_cmd_measureScalarCurrentDcQ) \
    SCPI_COMMAND("MEASure[:SCALar]:POWer[:DC]?", scpi_cmd_measureScalarPowerDcQ) \
    SCPI_COMMAND("MEASure[:SCALar]:TEMPerature[:THERmistor][:DC]?", scpi_cmd_measureScalarTemperatureThermistorDcQ) \
    SCPI_COMMAND("MEMory:NSTates?", scpi_cmd_memoryNstatesQ) \
    SCPI_COMMAND("MEMory:STATe:CATalog?", scpi_cmd_memoryStateCatalogQ) \
    SCPI_COMMAND("MEMory:STATe:DELete", scpi_cmd_memoryStateDelete) \
    SCPI_COMMAND("MEMory:STATe:DELete:ALL", scpi_cmd_memoryStateDeleteAll) \
    SCPI_COMMAND("MEMory:STATe:NAME", scpi_cmd_memoryStateName) \
    SCPI_COMMAND("MEMory:STATe:NAME?", scpi_cmd_memoryStateNameQ) \
    SCPI_COMMAND("MEMory:STATe:RECall:AUTO", scpi_cmd_memoryStateRecallAuto) \
    SCPI_COMMAND("MEMory:STATe:RECall:AUTO?", scpi_cmd_memoryStateRecallAutoQ) \
    SCPI_COMMAND("MEMory:STATe:RECall:SELect", scpi_cmd_memoryStateRecallSelect) \
    SCPI_COMMAND("MEMory:STATe:RECall:SELect?", scpi_cmd_memoryStateRecallSelectQ) \
    SCPI_COMMAND("MEMory:STATe:VALid?", scpi_cmd_memoryStateValidQ) \
    SCPI_COMMAND("MMEMory:LOAD:LIST#", scpi_cmd_mmemoryLoadList) \
    SCPI_COMMAND("MMEMory:STORe:LIST#", scpi_cmd_mmemoryStoreList) \
    SCPI_COMMAND("OUTPut:MODE?", scpi_cmd_outputModeQ) \
    SCPI_COMMAND("OUTPut:PROTection:CLEar", scpi_cmd_outputProtectionClear) \
    SCPI_COMMAND("OUTPut[:STATe]", scpi_cmd_outputState) \
    SCPI_COMMAND("OUTPut[:STATe]?", scpi_cmd_outputStateQ) \
    SCPI_COMMAND("OUTPut:TRACk[:STATe]", scpi_cmd_outputTrackState) \
    SCPI_COMMAND("OUTPut:TRACk[:STATe]?", scpi_cmd_outputTrackStateQ) \
    SCPI_COMMAND("OUTPut:PROTection:COUPle", scpi_cmd_outputProtectionCouple) \
    SCPI_COMMAND("OUTPut:PROTection:COUPle?", scpi_cmd_outputProtectionCoupleQ) \
    SCPI_COMMAND("OUTPut[:STATe]:TRIGgered", scpi_cmd_outputStateTriggered) \
    SCPI_COMMAND("OUTPut[:STATe]:TRIGgered?", scpi_cmd_outputStateTriggeredQ) \
    SCPI_COMMAND("SIMUlator:LOAD:STATe", scpi_cmd_simulatorLoadState) \
    SCPI_COMMAND("SIMUlator:LOAD:STATe?", scpi_cmd_simulatorLoadStateQ) \
    SCPI_COMMAND("SIMUlator:LOAD", scpi_cmd_simulatorLoad) \
    SCPI_COMMAND("SIMUlator:LOAD?", scpi_cmd_simulatorLoadQ) \
    SCPI_COMMAND("SIMUlator:VOLTage:PROGram:EXTernal", scpi_cmd_simulatorVoltageProgramExternal) \
    SCPI_COMMAND("SIMUlator:VOLTage:PROGram:EXTernal?", scpi_cmd_simulatorVoltageProgramExternalQ) \
    SCPI_COMMAND("SIMUlator:PWRGood", scpi_cmd_simulatorPwrgood) \
    SCPI_COMMAND("SIMUlator:PWRGood?", scpi_cmd_simulatorPwrgoodQ) \
    SCPI_COMMAND("SIMUlator:RPOL", scpi_cmd_simulatorRpol) \
    SCPI_COMMAND("SIMUlator:RPOL?", scpi_cmd_simulatorRpolQ) \
    SCPI_COMMAND("SIMUlator:TEMPerature", scpi_cmd_simulatorTemperature) \
    SCPI_COMMAND("SIMUlator:TEMPerature?", scpi_cmd_simulatorTemperatureQ) \
    SCPI_COMMAND("SIMUlator:GUI", scpi_cmd_simulatorGui) \
    SCPI_COMMAND("SIMUlator:EXIT", scpi_cmd_simulatorExit) \
    SCPI_COMMAND("SIMUlator:QUIT", scpi_cmd_simulatorQuit) \
    SCPI_COMMAND("SIMUlator:PIN1", scpi_cmd_simulatorPin1) \
    SCPI_COMMAND("SIMUlator:PIN1?", scpi_cmd_simulatorPin1Q) \
    SCPI_COMMAND("[SOURce#]:CURRent[:LEVel][:IMMediate][:AMPLitude]", scpi_cmd_sourceCurrentLevelImmediateAmplitude) \
    SCPI_COMMAND("[SOURce#]:CURRent[:LEVel][:IMMediate][:AMPLitude]?", scpi_cmd_sourceCurrentLevelImmediateAmplitudeQ) \
    SCPI_COMMAND("[SOURce#]:VOLTage[:LEVel][:IMMediate][:AMPLitude]", scpi_cmd_sourceVoltageLevelImmediateAmplitude) \
    SCPI_COMMAND("[SOURce#]:VOLTage[:LEVel][:IMMediate][:AMPLitude]?", scpi_cmd_sourceVoltageLevelImmediateAmplitudeQ) \
    SCPI_COMMAND("[SOURce#]:CURRent[:LEVel][:IMMediate]:STEP[:INCRement]", scpi_cmd_sourceCurrentLevelImmediateStepIncrement) \
    SCPI_COMMAND("[SOURce#]:CURRent[:LEVel][:IMMediate]:STEP[:INCRement]?", scpi_cmd_sourceCurrentLevelImmediateStepIncrementQ) \
    SCPI_COMMAND("[SOURce#]:VOLTage[:LEVel][:IMMediate]:STEP[:INCRement]", scpi_cmd_sourceVoltageLevelImmediateStepIncrement) \
    SCPI_COMMAND("[SOURce#]:VOLTage[:LEVel][:IMMediate]:STEP[:INCRement]?", scpi_cmd_sourceVoltageLevelImmediateStepIncrementQ) \
    SCPI_COMMAND("[SOURce#]:CURRent:PROTection:DELay[:TIME]", scpi_cmd_sourceCurrentProtectionDelayTime) \
    SCPI_COMMAND("[SOURce#]:CURRent:PROTection:DELay[:TIME]?", scpi_cmd_sourceCurrentProtectionDelayTimeQ) \
    SCPI_COMMAND("[SOURce#]:CURRent:PROTection:STATe", scpi_cmd_sourceCurrentProtectionState) \
    SCPI_COMMAND("[SOURce#]:CURRent:PROTection:STATe?", scpi_cmd_sourceCurrentProtectionStateQ) \
    SCPI_COMMAND("[SOURce#]:CURRent:PROTection:TRIPped?", scpi_cmd_sourceCurrentProtectionTrippedQ) \
    SCPI_COMMAND("[SOURce#]:POWer:PROTection[:LEVel]", scpi_cmd_sourcePowerProtectionLevel) \
    SCPI_COMMAND("[SOURce#]:POWer:PROTection[:LEVel]?", scpi_cmd_sourcePowerProtectionLevelQ) \
    SCPI_COMMAND("[SOURce#]:POWer:PROTection:DELay[:TIME]", scpi_cmd_sourcePowerProtectionDelayTime) \
    SCPI_COMMAND("[SOURce#]:POWer:PROTection:DELay[:TIME]?", scpi_cmd_sourcePowerProtectionDelayTimeQ) \
    SCPI_COMMAND("[SOURce#]:POWer:PROTection:STATe", scpi_cmd_sourcePowerProtectionState) \
    SCPI_COMMAND("[SOURce#]:POWer:PROTection:STATe?", scpi_cmd_sourcePowerProtectionStateQ) \
    SCPI_COMMAND("[SOURce#]:POWer:PROTection:TRIPped?", scpi_cmd_sourcePowerProtectionTrippedQ) \
    SCPI_COMMAND("[SOURce#]:VOLTage:PROTection[:LEVel]", scpi_cmd_sourceVoltageProtectionLevel) \
    SCPI_COMMAND("[SOURce#]:VOLTage:PROTection[:LEVel]?", scpi_cmd_sourceVoltageProtectionLevelQ) \
    SCPI_COMMAND("[SOURce#]:VOLTage:PROTection:DELay[:TIME]", scpi_cmd_sourceVoltageProtectionDelayTime) \
    SCPI_COMMAND("[SOURce#]:VOLTage:PROTection:DELay[:TIME]?", scpi_cmd_sourceVoltageProtectionDelayTimeQ) \
    SCPI_COMMAND("[SOURce#]:VOLTage:PROTection:STATe", scpi_cmd_sourceVoltageProtectionState) \
    SCPI_COMMAND("[SOURce#]:VOLTage:PROTection:STATe?", scpi_cmd_sourceVoltageProtectionStateQ) \
    SCPI_COMMAND("[SOURce#]:VOLTage:PROTection:TRIPped?", scpi_cmd_sourceVoltageProtectionTrippedQ) \
    SCPI_COMMAND("[SOURce#]:VOLTage:SENSe[:SOURce]", scpi_cmd_sourceVoltageSenseSource) \
    SCPI_COMMAND("[SOURce#]:VOLTage:SENSe[:SOURce]?", scpi_cmd_sourceVoltageSenseSourceQ) \
    SCPI_COMMAND("[SOURce#]:VOLTage:PROGram[:SOURce]", scpi_cmd_sourceVoltageProgramSource) \
    SCPI_COMMAND("[SOURce#]:VOLTage:PROGram[:SOURce]?", scpi_cmd_sourceVoltageProgramSourceQ) \
    SCPI_COMMAND("[SOURce#]:LRIPple", scpi_cmd_sourceLripple) \
    SCPI_COMMAND("[SOURce#]:LRIPple?", scpi_cmd_sourceLrippleQ) \
    SCPI_COMMAND("[SOURce#]:LRIPple:AUTO", scpi_cmd_sourceLrippleAuto) \
    SCPI_COMMAND("[SOURce#]:LRIPple:AUTO?", scpi_cmd_sourceLrippleAutoQ) \
    SCPI_COMMAND("[SOURce#]:CURRent:LIMit[:POSitive][:IMMediate][:AMPLitude]", scpi_cmd_sourceCurrentLimitPositiveImmediateAmplitude) \
    SCPI_COMMAND("[SOURce#]:CURRent:LIMit[:POSitive][:IMMediate][:AMPLitude]?", scpi_cmd_sourceCurrentLimitPositiveImmediateAmplitudeQ) \
    SCPI_COMMAND("[SOURce#]:VOLTage:LIMit[:POSitive][:IMMediate][:AMPLitude]", scpi_cmd_sourceVoltageLimitPositiveImmediateAmplitude) \
    SCPI_COMMAND("[SOURce#]:VOLTage:LIMit[:POSitive][:IMMediate][:AMPLitude]?", scpi_cmd_sourceVoltageLimitPositiveImmediateAmplitudeQ) \
    SCPI_COMMAND("[SOURce#]:POWer:LIMit", scpi_cmd_sourcePowerLimit) \
    SCPI_COMMAND("[SOURce#]:POWer:LIMit?", scpi_cmd_sourcePowerLimitQ) \
    SCPI_COMMAND("[SOURce#]:CURRent[:LEVel]:TRIGgered[:AMPLitude]", scpi_cmd_sourceCurrentLevelTriggeredAmplitude) \
    SCPI_COMMAND("[SOURce#]:CURRent[:LEVel]:TRIGgered[:AMPLitude]?", scpi_cmd_sourceCurrentLevelTriggeredAmplitudeQ) \
    SCPI_COMMAND("[SOURce#]:VOLTage[:LEVel]:TRIGgered[:AMPLitude]", scpi_cmd_sourceVoltageLevelTriggeredAmplitude) \
    SCPI_COMMAND("[SOURce#]:VOLTage[:LEVel]:TRIGgered[:AMPLitude]?", scpi_cmd_sourceVoltageLevelTriggeredAmplitudeQ) \
    SCPI_COMMAND("[SOURce#]:CURRent:MODE", scpi_cmd_sourceCurrentMode) \
    SCPI_COMMAND("[SOURce#]:CURRent:MODE?", scpi_cmd_sourceCurrentModeQ) \
    SCPI_COMMAND("[SOURce#]:VOLTage:MODE", scpi_cmd_sourceVoltageMode) \
    SCPI_COMMAND("[SOURce#]:VOLTage:MODE?", scpi_cmd_sourceVoltageModeQ) \
    SCPI_COMMAND("[SOURce#]:LIST:COUNt", scpi_cmd_sourceListCount) \
    SCPI_COMMAND("[SOURce#]:LIST:COUNt?", scpi_cmd_sourceListCountQ) \
    SCPI_COMMAND("[SOURce#]:LIST:CURRent[:LEVel]", scpi_cmd_sourceListCurrentLevel) \
    SCPI_COMMAND("[SOURce#]:LIST:CURRent[:LEVel]?", scpi_cmd_sourceListCurrentLevelQ) \
    SCPI_COMMAND("[SOURce#]:LIST:DWELl", scpi_cmd_sourceListDwell) \
    SCPI_COMMAND("[SOURce#]:LIST:DWELl?", scpi_cmd_sourceListDwellQ) \
    SCPI_COMMAND("[SOURce#]:LIST:VOLTage[:LEVel]", scpi_cmd_sourceListVoltageLevel) \
    SCPI_COMMAND("[SOURce#]:LIST:VOLTage[:LEVel]?", scpi_cmd_sourceListVoltageLevelQ) \
    SCPI_COMMAND("[SOURce]:DIGital:INPut:DATA?", scpi_cmd_sourceDigitalInputDataQ) \
    SCPI_COMMAND("[SOURce]:DIGital:OUTPut:DATA", scpi_cmd_sourceDigitalOutputData) \
    SCPI_COMMAND("[SOURce]:DIGital:PIN#:FUNCtion", scpi_cmd_sourceDigitalPinFunction) \
    SCPI_COMMAND("[SOURce]:DIGital:PIN#:FUNCtion?", scpi_cmd_sourceDigitalPinFunctionQ) \
    SCPI_COMMAND("[SOURce]:DIGital:PIN#:POLarity", scpi_cmd_sourceDigitalPinPolarity) \
    SCPI_COMMAND("[SOURce]:DIGital:PIN#:POLarity?", scpi_cmd_sourceDigitalPinPolarityQ) \
    SCPI_COMMAND("STATus:QUEStionable[:EVENt]?", scpi_cmd_statusQuestionableEventQ) \
    SCPI_COMMAND("STATus:QUEStionable:CONDition?", scpi_cmd_statusQuestionableConditionQ) \
    SCPI_COMMAND("STATus:QUEStionable:ENABle", scpi_cmd_statusQuestionableEnable) \
    SCPI_COMMAND("STATus:QUEStionable:ENABle?", scpi_cmd_statusQuestionableEnableQ) \
    SCPI_COMMAND("STATus:OPERation[:EVENt]?", scpi_cmd_statusOperationEventQ) \
    SCPI_COMMAND("STATus:OPERation:CONDition?", scpi_cmd_statusOperationConditionQ) \
    SCPI_COMMAND("STATus:OPERation:ENABle", scpi_cmd_statusOperationEnable) \
    SCPI_COMMAND("STATus:OPERation:ENABle?", scpi_cmd_statusOperationEnableQ) \
    SCPI_COMMAND("STATus:QUEStionable:INSTrument[:EVENt]?", scpi_cmd_statusQuestionableInstrumentEventQ) \
    SCPI_COMMAND("STATus:QUEStionable:INSTrument:CONDition?", scpi_cmd_statusQuestionableInstrumentConditionQ) \
    SCPI_COMMAND("STATus:QUEStionable:INSTrument:ENABle", scpi_cmd_statusQuestionableInstrumentEnable) \
    SCPI_COMMAND("STATus:QUEStionable:INSTrument:ENABle?", scpi_cmd_statusQuestionableInstrumentEnableQ) \
    SCPI_COMMAND("STATus:OPERation:INSTrument[:EVENt]?", scpi_cmd_statusOperationInstrumentEventQ) \
    SCPI_COMMAND("STATus:OPERation:INSTrument:CONDition?", scpi_cmd_statusOperationInstrumentConditionQ) \
    SCPI_COMMAND("STATus:OPERation:INSTrument:ENABle", scpi_cmd_statusOperationInstrumentEnable) \
    SCPI_COMMAND("STATus:OPERation:INSTrument:ENABle?", scpi_cmd_statusOperationInstrumentEnableQ) \
    SCPI_COMMAND("STATus:QUEStionable:INSTrument:ISUMmary#[:EVENt]?", scpi_cmd_statusQuestionableInstrumentIsummaryEventQ) \
    SCPI_COMMAND("STATus:QUEStionable:INSTrument:ISUMmary#:CONDition?", scpi_cmd_statusQuestionableInstrumentIsummaryConditionQ) \
    SCPI_COMMAND("STATus:QUEStionable:INSTrument:ISUMmary#:ENABle", scpi_cmd_statusQuestionableInstrumentIsummaryEnable) \
    SCPI_COMMAND("STATus:QUEStionable:INSTrument:ISUMmary#:ENABle?", scpi_cmd_statusQuestionableInstrumentIsummaryEnableQ) \
    SCPI_COMMAND("STATus:OPERation:INSTrument:ISUMmary#[:EVENt]?", scpi_cmd_statusOperationInstrumentIsummaryEventQ) \
    SCPI_COMMAND("STATus:OPERation:INSTrument:ISUMmary#:CONDition?", scpi_cmd_statusOperationInstrumentIsummaryConditionQ) \
    SCPI_COMMAND("STATus:OPERation:INSTrument:ISUMmary#:ENABle", scpi_cmd_statusOperationInstrumentIsummaryEnable) \
    SCPI_COMMAND("STATus:OPERation:INSTrument:ISUMmary#:ENABle?", scpi_cmd_statusOperationInstrumentIsummaryEnableQ) \
    SCPI_COMMAND("STATus:PREset", scpi_cmd_statusPreset) \
    SCPI_COMMAND("SYSTem:CAPability?", scpi_cmd_systemCapabilityQ) \
    SCPI_COMMAND("SYSTem:ERRor[:NEXT]?", scpi_cmd_systemErrorNextQ) \
    SCPI_COMMAND("SYSTem:ERRor:COUNt?", scpi_cmd_systemErrorCountQ) \
    SCPI_COMMAND("SYSTem:VERSion?", scpi_cmd_systemVersionQ) \
    SCPI_COMMAND("SYSTem:POWer", scpi_cmd_systemPower) \
    SCPI_COMMAND("SYSTem:POWer?", scpi_cmd_systemPowerQ) \
    SCPI_COMMAND("SYSTem:DATE", scpi_cmd_systemDate) \
    SCPI_COMMAND("SYSTem:DATE:CLEar", scpi_cmd_systemDateClear) \
    SCPI_COMMAND("SYSTem:DATE?", scpi_cmd_systemDateQ) \
    SCPI_COMMAND("SYSTem:TIME", scpi_cmd_systemTime) \
    SCPI_COMMAND("SYSTem:TIME:CLEar", scpi_cmd_systemTimeClear) \
    SCPI_COMMAND("SYSTem:TIME?", scpi_cmd_systemTimeQ) \
    SCPI_COMMAND("SYSTem:TIME:DST", scpi_cmd_systemTimeDst) \
    SCPI_COMMAND("SYSTem:TIME:DST?", scpi_cmd_systemTimeDstQ) \
    SCPI_COMMAND("SYSTem:TIME:ZONE", scpi_cmd_systemTimeZone) \
    SCPI_COMMAND("SYSTem:TIME:ZONE?", scpi_cmd_systemTimeZoneQ) \
    SCPI_COMMAND("SYSTem:BEEPer[:IMMediate]", scpi_cmd_systemBeeperImmediate) \
    SCPI_COMMAND("SYSTem:BEEPer:STATe", scpi_cmd_systemBeeperState) \
    SCPI_COMMAND("SYSTem:BEEPer:STATe?", scpi_cmd_systemBeeperStateQ) \
    SCPI_COMMAND("SYSTem:BEEPer:KEY:STATe", scpi_cmd_systemBeeperKeyState) \
    SCPI_COMMAND("SYSTem:BEEPer:KEY:STATe?", scpi_cmd_systemBeeperKeyStateQ) \
    SCPI_COMMAND("SYSTem:TEMPerature:PROTection[:HIGH]:CLEar", scpi_cmd_systemTemperatureProtectionHighClear) \
    SCPI_COMMAND("SYSTem:TEMPerature:PROTection[:HIGH][:LEVel]", scpi_cmd_systemTemperatureProtectionHighLevel) \
    SCPI_COMMAND("SYSTem:TEMPerature:PROTection[:HIGH][:LEVel]?", scpi_cmd_systemTemperatureProtectionHighLevelQ) \
    SCPI_COMMAND("SYSTem:TEMPerature:PROTection[:HIGH]:STATe", scpi_cmd_systemTemperatureProtectionHighState) \
    SCPI_COMMAND("SYSTem:TEMPerature:PROTection[:HIGH]:STATe?", scpi_cmd_systemTemperatureProtectionHighStateQ) \
    SCPI_COMMAND("SYSTem:TEMPerature:PROTection[:HIGH]:DELay[:TIME]", scpi_cmd_systemTemperatureProtectionHighDelayTime) \
    SCPI_COMMAND("SYSTem:TEMPerature:PROTection[:HIGH]:DELay[:TIME]?", scpi_cmd_systemTemperatureProtectionHighDelayTimeQ) \
    SCPI_COMMAND("SYSTem:TEMPerature:PROTection[:HIGH]:TRIPped?", scpi_cmd_systemTemperatureProtectionHighTrippedQ) \
    SCPI_COMMAND("SYSTem:CHANnel[:COUNt]?", scpi_cmd_systemChannelCountQ) \
    SCPI_COMMAND("SYSTem:CHANnel:INFOrmation:CURRent?", scpi_cmd_systemChannelInformationCurrentQ) \
    SCPI_COMMAND("SYSTem:CHANnel:INFOrmation:POWer?", scpi_cmd_systemChannelInformationPowerQ) \
    SCPI_COMMAND("SYSTem:CHANnel:INFOrmation:PROGram?", scpi_cmd_systemChannelInformationProgramQ) \
    SCPI_COMMAND("SYSTem:CHANnel:INFOrmation:VOLTage?", scpi_cmd_systemChannelInformationVoltageQ) \
    SCPI_COMMAND("SYSTem:CHANnel:INFOrmation:ONTime:TOTal?", scpi_cmd_systemChannelInformationOntimeTotalQ) \
    SCPI_COMMAND("SYSTem:CHANnel:INFOrmation:ONTime:LASt?", scpi_cmd_systemChannelInformationOntimeLastQ) \
    SCPI_COMMAND("SYSTem:CHANnel:MODel?", scpi_cmd_systemChannelModelQ) \
    SCPI_COMMAND("SYSTem:CPU:INFOrmation:ETHernet:TYPE?", scpi_cmd_systemCpuInformationEthernetTypeQ) \
    SCPI_COMMAND("SYSTem:CPU:INFOrmation:TYPE?", scpi_cmd_systemCpuInformationTypeQ) \
    SCPI_COMMAND("SYSTem:CPU:INFOrmation:ONTime:TOTal?", scpi_cmd_systemCpuInformationOntimeTotalQ) \
    SCPI_COMMAND("SYSTem:CPU:INFOrmation:ONTime:LASt?", scpi_cmd_systemCpuInformationOntimeLastQ) \
    SCPI_COMMAND("SYSTem:CPU:MODel?", scpi_cmd_systemCpuModelQ) \
    SCPI_COMMAND("SYSTem:CPU:OPTion?", scpi_cmd_systemCpuOptionQ) \
    SCPI_COMMAND("SYSTem:SERial", scpi_cmd_systemSerial) \
    SCPI_COMMAND("SYSTem:SERial?", scpi_cmd_systemSerialQ) \
    SCPI_COMMAND("SYSTem:POWer:PROTection:TRIP", scpi_cmd_systemPowerProtectionTrip) \
    SCPI_COMMAND("SYSTem:POWer:PROTection:TRIP?", scpi_cmd_systemPowerProtectionTripQ) \
    SCPI_COMMAND("SYSTem:PON:OUTPut:DISable", scpi_cmd_systemPonOutputDisable) \
    SCPI_COMMAND("SYSTem:PON:OUTPut:DISable?", scpi_cmd_systemPonOutputDisableQ) \
    SCPI_COMMAND("SYSTem:PASSword:NEW", scpi_cmd_systemPasswordNew) \
    SCPI_COMMAND("SYSTem:PASSword:FPANel:RESet", scpi_cmd_systemPasswordFpanelReset) \
    SCPI_COMMAND("SYSTem:PASSword:CALibrate:RESet", scpi_cmd_systemPasswordCalibrateReset) \
    SCPI_COMMAND("SYSTem:KLOCk", scpi_cmd_systemKlock) \
    SCPI_COMMAND("SYSTem:COMMunicate:RLSTate", scpi_cmd_systemCommunicateRlstate) \
    SCPI_COMMAND("SYSTem:LOCal", scpi_cmd_systemLocal) \
    SCPI_COMMAND("SYSTem:REMote", scpi_cmd_systemRemote) \
    SCPI_COMMAND("SYSTem:RWLock", scpi_cmd_systemRwlock) \
    SCPI_COMMAND("SYSTem:COMMunicate:SERial:BAUD", scpi_cmd_systemCommunicateSerialBaud) \
    SCPI_COMMAND("SYSTem:COMMunicate:SERial:BAUD?", scpi_cmd_systemCommunicateSerialBaudQ) \
    SCPI_COMMAND("SYSTem:COMMunicate:SERial:PARity", scpi_cmd_systemCommunicateSerialParity) \
    SCPI_COMMAND("SYSTem:COMMunicate:SERial:PARity?", scpi_cmd_systemCommunicateSerialParityQ) \
    SCPI_COMMAND("SYSTem:COMMunicate:ENABle", scpi_cmd_systemCommunicateEnable) \
    SCPI_COMMAND("SYSTem:COMMunicate:ENABle?", scpi_cmd_systemCommunicateEnableQ) \
    SCPI_COMMAND("SYSTem:COMMunicate:ETHernet:DHCP", scpi_cmd_systemCommunicateEthernetDhcp) \
    SCPI_COMMAND("SYSTem:COMMunicate:ETHernet:DHCP?", scpi_cmd_systemCommunicateEthernetDhcpQ) \
    SCPI_COMMAND("SYSTem:COMMunicate:ETHernet:ADDRess", scpi_cmd_systemCommunicateEthernetAddress) \
    SCPI_COMMAND("SYSTem:COMMunicate:ETHernet:ADDRess?", scpi_cmd_systemCommunicateEthernetAddressQ) \
    SCPI_COMMAND("SYSTem:COMMunicate:ETHernet:DNS", scpi_cmd_systemCommunicateEthernetDns) \
    SCPI_COMMAND("SYSTem:COMMunicate:ETHernet:DNS?", scpi_cmd_systemCommunicateEthernetDnsQ) \
    SCPI_COMMAND("SYSTem:COMMunicate:ETHernet:GATEway", scpi_cmd_systemCommunicateEthernetGateway) \
    SCPI_COMMAND("SYSTem:COMMunicate:ETHernet:GATEway?", scpi_cmd_systemCommunicateEthernetGatewayQ) \
    SCPI_COMMAND("SYSTem:COMMunicate:ETHernet:SMASk", scpi_cmd_systemCommunicateEthernetSmask) \
    SCPI_COMMAND("SYSTem:COMMunicate:ETHernet:SMASk?", scpi_cmd_systemCommunicateEthernetSmaskQ) \
    SCPI_COMMAND("SYSTem:COMMunicate:ETHernet:PORT", scpi_cmd_systemCommunicateEthernetPort) \
    SCPI_COMMAND("SYSTem:COMMunicate:ETHernet:PORT?", scpi_cmd_systemCommunicateEthernetPortQ) \
    SCPI_COMMAND("SYSTem:COMMunicate:ETHernet:MAC", scpi_cmd_systemCommunicateEthernetMac) \
    SCPI_COMMAND("SYSTem:COMMunicate:ETHernet:MAC?", scpi_cmd_systemCommunicateEthernetMacQ) \
    SCPI_COMMAND("SYSTem:COMMunicate:NTP", scpi_cmd_systemCommunicateNtp) \
    SCPI_COMMAND("SYSTem:COMMunicate:NTP?", scpi_cmd_systemCommunicateNtpQ) \
    SCPI_COMMAND("TRIGger[:SEQuence][:IMMediate]", scpi_cmd_triggerSequenceImmediate) \
    SCPI_COMMAND("TRIGger[:SEQuence]:DELay", scpi_cmd_triggerSequenceDelay) \
    SCPI_COMMAND("TRIGger[:SEQuence]:DELay?", scpi_cmd_triggerSequenceDelayQ) \
    SCPI_COMMAND("TRIGger[:SEQuence]:SOURce", scpi_cmd_triggerSequenceSource) \
    SCPI_COMMAND("TRIGger[:SEQuence]:SOURce?", scpi_cmd_triggerSequenceSourceQ) \
    SCPI_COMMAND("TRIGger[:SEQuence]:EXIT:CONDition", scpi_cmd_triggerSequenceExitCondition) \
    SCPI_COMMAND("TRIGger[:SEQuence]:EXIT:CONDition?", scpi_cmd_triggerSequenceExitConditionQ) \
    SCPI_COMMAND("INITiate", scpi_cmd_initiate) \
    SCPI_COMMAND("INITiate:CONTinuous", scpi_cmd_initiateContinuous) \
    SCPI_COMMAND("INITiate:CONTinuous?", scpi_cmd_initiateContinuousQ) \
    SCPI_COMMAND("ABORt", scpi_cmd_abort) \
    SCPI_COMMAND("*TRG", scpi_cmd_coreTrg) \
    SCPI_COMMAND("DISPlay:BRIGhtness", scpi_cmd_displayBrightness) \
    SCPI_COMMAND("DISPlay:BRIGhtness?", scpi_cmd_displayBrightnessQ) \
    SCPI_COMMAND("DISPlay:VIEW", scpi_cmd_displayView) \
    SCPI_COMMAND("DISPlay:VIEW?", scpi_cmd_displayViewQ) \
    SCPI_COMMAND("DISPlay[:WINdow][:STATe]", scpi_cmd_displayWindowState) \
    SCPI_COMMAND("DISPlay[:WINdow][:STATe]?", scpi_cmd_displayWindowStateQ) \
    SCPI_COMMAND("DISPlay[:WINdow]:TEXT", scpi_cmd_displayWindowText) \
    SCPI_COMMAND("DISPlay[:WINdow]:TEXT?", scpi_cmd_displayWindowTextQ) \
    SCPI_COMMAND("DISPlay[:WINdow]:TEXT:CLEar", scpi_cmd_displayWindowTextClear) \
    SCPI_COMMAND("SENSe:CURRent[:DC]:RANGe[:UPPer]", scpi_cmd_senseCurrentDcRangeUpper) \
    SCPI_COMMAND("SENSe:CURRent[:DC]:RANGe[:UPPer]?", scpi_cmd_senseCurrentDcRangeUpperQ) \
    SCPI_COMMAND("SENSe:CURRent[:DC]:RANGe:AUTO", scpi_cmd_senseCurrentDcRangeAuto) \
    SCPI_COMMAND("SENSe:CURRent[:DC]:RANGe:AUTO?", scpi_cmd_senseCurrentDcRangeAutoQ)
