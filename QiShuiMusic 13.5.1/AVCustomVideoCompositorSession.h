@interface AVCustomVideoCompositorSession : NSObject
@property (nonatomic) BOOL supportsWideColorSourceFrames;
@property (nonatomic) BOOL supportsHDRSourceFrames;
- (void)dealloc;
- (void)setVideoComposition:;
- (id)customVideoCompositor;
- (BOOL)supportsWideColorSourceFrames;
- (BOOL)supportsHDRSourceFrames;
- (void)_willDeallocOrFinalize;
- (id)initWithVideoComposition:;
- (BOOL)_validateSourcePixelBufferAttributes:andReturnException:;
- (BOOL)_validateRequiredPixelBufferAttributesForRenderContext:andReturnException:;
- (BOOL)commitCustomVideoCompositorPropertiesAndReturnError:;
- (void)detachVideoComposition;
- (id)_copyFigVideoCompositor;
- (id)getAndClearClientError;
- (void)compositionFrame:didFinishWithComposedPixelBuffer:;
- (void)compositionFrame:didFinishWithError:;
- (void)compositionFrameDidCancel:;
- (int)_compositionFrame:atTime:requiresRenderUsingSources:requiresSampleBuffersUsingSources:withInstruction:;
- (int)_customCompositorShouldAnticipateRenderingFromTime:toTime:andThenFromTime:toTime:;
- (int)_customCompositorShouldPrerollForRenderingFromTime:toTime:andThenFromTime:toTime:requestID:;
- (int)_customCompositorShouldCancelPendingFrames;
- (void)_customCompositorFigPropertyDidChange;
- (int)_setupFigCallbacks;
- (void)_cleanupFigCallbacks;
+ (id)sessionWithVideoComposition:recyclingSession:;
+ (BOOL)_colorPropertiesAreSetInVideoComposition:;
@end
