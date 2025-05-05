@interface BWActionCameraFlickerAvoidanceMonitor : NSObject
@property (nonatomic) NSInteger flickerFrequency;
- (void)dealloc;
- (id)initWithDefaultMaxExposureDurationFrameworkOverrideByPortType:;
- (BOOL)detectFlickerWithSampleBuffer:fromCaptureStreamWithPortType:;
- (int)flickerFrequency;
- (void)setFlickerFrequency:;
@end
