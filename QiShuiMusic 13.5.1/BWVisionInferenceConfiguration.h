@interface BWVisionInferenceConfiguration : BWInferenceConfiguration
@property (nonatomic) @? shouldPreventRequestForSampleBuffer;
@property (nonatomic) BOOL reuseUpstreamFaceObservations;
- (void)dealloc;
- (id)shouldPreventRequestForSampleBuffer;
- (void)setShouldPreventRequestForSampleBuffer:;
- (BOOL)reuseUpstreamFaceObservations;
- (void)setReuseUpstreamFaceObservations:;
@end
