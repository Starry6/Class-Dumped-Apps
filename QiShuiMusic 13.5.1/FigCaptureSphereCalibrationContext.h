@interface FigCaptureSphereCalibrationContext : FigCaptureCalibrationContext
- (id)initWithSupportedDeviceNames:;
- (void)reportLoggingWithCalibrationData:isValid:magneticFieldMagnitude:;
+ (void)printDebugInfoForRawStreamCalibrationData:;
+ (unsigned int)calibrationStatusFromRawStreamCalibrationData:;
+ (id)calibrationDataStringForInternalLogging:;
+ (id)createRawStreamCalibrationDataWithFailureReasons:;
@end
