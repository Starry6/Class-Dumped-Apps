@interface BWAutoFocusPositionSensorMonitor : NSObject
- (id)init;
- (void)dealloc;
+ (id)sharedInstance;
+ (void)clientHasBeenBackgrounded;
+ (void)logVideoRecordingAPSStatistics:;
+ (void)logStillImageAPSStatistics:;
+ (void)processAPSOffsetEstimatorInfo:portType:;
@end
