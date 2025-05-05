@interface IESImageListFilter : HTSGLFilter
@property (nonatomic) NSArray filters;
- (void)addTarget:atTextureLocation:;
- (void)endProcessing;
- (void)forceProcessingAtSize:;
- (void)forceProcessingAtSizeRespectingAspectRatio:;
- (id)frameProcessingCompletionBlock;
- (id)maximumOutputSize;
- (id)newCGImageFromCurrentlyProcessedOutput;
- (void)newFrameReadyAtTime:atIndex:exceptionBlock:;
- (long long)nextAvailableTextureIndex;
- (void)removeAllTargets;
- (void)setFrameProcessingCompletionBlock:;
- (void)setInputFramebuffer:atIndex:;
- (void)setInputRotation:atIndex:;
- (void)setInputSize:atIndex:;
- (void)setTargetToIgnoreForUpdates:;
- (void)useNextFrameForImageCapture;
- (BOOL)wantsMonochromeInput;
- (id)filters;
- (void)addFilter:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)removeFilter:;
- (void)removeTarget:;
@end
