@interface CMMotionContextSession : NSObject
- (id)init;
- (id)initWithOptions:;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setAlgType:;
- (void)setSpeedEstType:;
- (void)enableMLModel:;
- (void)enterDistractedViewingSession:;
- (void)exitDistractedViewingSession:;
- (void)setTrackingClientMode:;
- (void)initLoggerWithPrefix:filePath:;
- (void)notifyStepCountClient:;
- (void)notifyPdrClient:;
- (void)notifyMotionContextClient:;
- (void)startStepCountUpdatesToQueue:andHandler:;
- (void)startPdrUpdatesToQueue:andHandler:;
- (void)startMotionContextUpdatesToQueue:andHandler:;
- (void)feedSourceDeviceIMU:;
- (void)feedAudioAccessoryIMU:;
- (void)feedAccessoryConfig:;
- (void)feedARKitWorldPoseWithTimestamp:pose:status:;
- (void)feedGPSLocationWithTimestamp:course:speed:latitude:longitude:horizontalAccuracy:;
+ (BOOL)isAvailable;
@end
