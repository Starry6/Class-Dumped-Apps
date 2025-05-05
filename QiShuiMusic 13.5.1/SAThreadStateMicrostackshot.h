@interface SAThreadStateMicrostackshot : SAThreadState
- (BOOL)isMicrostackshot;
- (unsigned int)cpuSpeedMhz;
- (BOOL)isOnBattery;
- (BOOL)isUserMode;
- (BOOL)isInterruptRecord;
- (BOOL)isBatteryAndUserActivityValid;
- (unsigned char)microstackshotFlags;
- (BOOL)isIORecord;
- (BOOL)isTimerArmingRecord;
- (BOOL)isUserActive;
+ (id)stateWithMicrostackshot:thread:startTimestamp:endTimestamp:startSampleIndex:endSampleIndex:leafUserFrame:leafOfCRootFramesReplacedBySwiftAsync:leafKernelFrame:machTimebase:;
@end
