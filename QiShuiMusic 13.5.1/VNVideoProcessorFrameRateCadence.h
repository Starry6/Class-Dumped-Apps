@interface VNVideoProcessorFrameRateCadence : VNVideoProcessorCadence
@property (nonatomic) q frameRate;
- (long long)frameRate;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (void)populateVCPVideoProcessorRequestConfiguration:;
- (id)initWithFrameRate:;
@end
