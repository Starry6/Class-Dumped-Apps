@interface FigCaptureCalibrationMonitor : NSObject
- (id)apsSphereInteractionCalibrationData;
- (id)sphereCalibrationData;
- (id)runAutoFocusPositionSensorCalibrationAndGetResultsForDeviceType:devicePosition:;
- (id)sphereEndStopCalibrationData;
- (id)autoFocusCalibrationData;
- (id)autoFocusPositionSensorCalibrationData;
+ (id)sharedInstance;
+ (void)initializeSharedInstanceWithCaptureSourceBackings:;
@end
