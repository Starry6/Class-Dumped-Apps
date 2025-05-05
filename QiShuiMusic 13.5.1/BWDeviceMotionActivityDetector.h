@interface BWDeviceMotionActivityDetector : NSObject
@property (nonatomic) BOOL stationary;
@property (nonatomic) BOOL directionalMotionDetectionEnabled;
- (id)init;
- (void)dealloc;
- (void)processSampleBuffer:;
- (BOOL)isStationary;
- (void)setDirectionalMotionDetectionEnabled:;
- (BOOL)isDirectionalMotionDetectionEnabled;
@end
