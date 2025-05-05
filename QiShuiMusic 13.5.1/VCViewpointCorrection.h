@interface VCViewpointCorrection : NSObject
- (id)init;
- (void)dealloc;
- (int)viewpointCorrectionForSampleBuffer:activeFormat:enabled:;
+ (id)intrinsicsFromDeviceFormat:;
@end
