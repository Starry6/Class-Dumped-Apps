@interface HTSGLFilterGroup : HTSFilterInterface
@property (nonatomic) HTSFilterInterface<HTSGLInput> terminalFilter;
@property (nonatomic) NSArray initialFilters;
@property (nonatomic) HTSFilterInterface<HTSGLInput> inputFilterToIgnoreForUpdates;
@property (nonatomic) HTSGLContext context;
@property (nonatomic) NSString route;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addTarget:atTextureLocation:;
- (void)endProcessing;
- (void)forceProcessingAtSize:;
- (void)forceProcessingAtSizeRespectingAspectRatio:;
- (id)frameProcessingCompletionBlock;
- (id)framebufferForOutput;
- (id)initialFilters;
- (id)inputFilterToIgnoreForUpdates;
- (id)maximumOutputSize;
- (id)newCGImageFromCurrentlyProcessedOutput;
- (id)newCGImageFromCurrentlyProcessedOutput:;
- (void)newFrameReadyAtTime:atIndex:exceptionBlock:;
- (long long)nextAvailableTextureIndex;
- (void)removeAllTargets;
- (void)removeOutputFramebuffer;
- (void)setFilterID:;
- (void)setFrameProcessingCompletionBlock:;
- (void)setInitialFilters:;
- (void)setInputFilterToIgnoreForUpdates:;
- (void)setInputFramebuffer:atIndex:;
- (void)setInputRotation:atIndex:;
- (void)setInputSize:atIndex:;
- (void)setTargetToIgnoreForUpdates:;
- (void)setTerminalFilter:;
- (void)setupMimoMode:;
- (void)setupSecondaryOutputSize:;
- (id)terminalFilter;
- (void)useNextFrameForImageCapture;
- (BOOL)wantsMonochromeInput;
- (id)targets;
- (id)route;
- (void)addFilter:;
- (id)initWithContext:;
- (id)filterAtIndex:;
- (void).cxx_destruct;
- (unsigned long long)filterCount;
- (void)removeTarget:;
+ (id)imageNamed:;
@end
