@interface AVAsynchronousVideoCompositionRequestInternal : NSObject
@property (nonatomic) AVWeakReference session;
@property (nonatomic) AVVideoCompositionRenderContext renderContext;
@property (nonatomic) ^{OpaqueFigVideoCompositorFrame=} compositionFrame;
@property (nonatomic) {?=qiIq} compositionTime;
@property (nonatomic) NSDictionary sourcesByTrackID;
@property (nonatomic) NSArray sourceTrackIDsInClientOrder;
@property (nonatomic) NSDictionary sampleBufferSourcesByTrackID;
@property (nonatomic) NSArray sourceSampleBufferTrackIDsInClientOrder;
@property (nonatomic) <AVVideoCompositionInstruction> instruction;
@property (nonatomic) BOOL isFinished;
- (id)renderContext;
- (void)setSession:;
- (void)dealloc;
- (BOOL)isFinished;
- (id)session;
- (id)instruction;
- (void)setInstruction:;
- (void)setIsFinished:;
- (id)compositionTime;
- (void)setRenderContext:;
- (id)compositionFrame;
- (void)setCompositionFrame:;
- (void)setCompositionTime:;
- (id)sourcesByTrackID;
- (void)setSourcesByTrackID:;
- (id)sourceTrackIDsInClientOrder;
- (void)setSourceTrackIDsInClientOrder:;
- (id)sampleBufferSourcesByTrackID;
- (void)setSampleBufferSourcesByTrackID:;
- (id)sourceSampleBufferTrackIDsInClientOrder;
- (void)setSourceSampleBufferTrackIDsInClientOrder:;
@end
