@interface AVAsynchronousVideoCompositionRequest : NSObject
@property (nonatomic) AVVideoCompositionRenderContext renderContext;
@property (nonatomic) {?=qiIq} compositionTime;
@property (nonatomic) NSArray sourceTrackIDs;
@property (nonatomic) NSArray sourceSampleDataTrackIDs;
@property (nonatomic) <AVVideoCompositionInstruction> videoCompositionInstruction;
- (id)renderContext;
- (void)dealloc;
- (void)finishWithError:;
- (id)copyWithZone:;
- (id)videoCompositionInstruction;
- (id)sourceSampleDataTrackIDs;
- (void)_willDeallocOrFinalize;
- (id)compositionTime;
- (id)compositionFrame;
- (id)sourceTrackIDs;
- (id)sourceFrameByTrackID:;
- (id)sourceSampleBufferByTrackID:;
- (id)sourceTimedMetadataByTrackID:;
- (void)finishWithComposedVideoFrame:;
- (void)finishCancelledRequest;
- (id)initUsingSession:withRenderContext:compositionFrame:atTime:usingSources:instruction:withSampleBuffers:;
@end
