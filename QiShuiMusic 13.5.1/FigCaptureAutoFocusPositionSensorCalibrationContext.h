@interface FigCaptureAutoFocusPositionSensorCalibrationContext : FigCaptureCalibrationContext
@property (nonatomic) BOOL disableHistoryChecking;
- (void)setDisableHistoryChecking:;
- (int)passingIStopZEstimateDeltaForPosition:;
- (int)currentIStopZEstimateDeltaForPosition:;
- (BOOL)_shouldRejectCalibrationData:;
- (id)initWithSupportedDeviceNames:;
- (double)currentAngleDelta;
- (void)setLastSuccessfulCalibrationData:;
- (id)_initForUnitTests;
- (BOOL)disableHistoryChecking;
- (void)pushCalibrationDataToHistory:isRejected:;
- (void)reportLoggingWithCalibrationData:isValid:magneticFieldMagnitude:;
- (void)_pushToCalibrationHistoryQueue:;
- (BOOL)_calibrationDataIsWithinIStopZEstimateLimits:basedOnCalibrationHistory:;
- (int)previousIStopZEstimateDeltaForPosition:;
- (double)previousAngleDelta;
- (id)calibrationDataHistory;
- (BOOL)_calibrationDataCompassHeadingHasMovedPastMinimum:basedOnCalibrationHistory:;
+ (void)printDebugInfoForRawStreamCalibrationData:;
+ (unsigned int)calibrationStatusFromRawStreamCalibrationData:;
+ (id)calibrationDataStringForInternalLogging:;
+ (id)createRawStreamCalibrationDataWithFailureReasons:;
+ (void)setStatusForCalibrationData:status:;
@end
