@interface BWInferenceSchedulerResourceCoordinator : NSObject
- (id)init;
- (void)dealloc;
- (int)requestPixelBufferPoolForRequirement:size:;
- (id)pixelBufferPoolForFormat:;
- (void)preparePixelBufferPools;
- (int)requestPixelBufferPoolForFormat:size:;
- (id)formatsWithRequestedPoolsRemainingAfterSubtractingFormats:;
@end
