@interface BDXCategoryViewAnimator : NSObject
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) double firstTimestamp;
@property (nonatomic) BOOL executing;
@property (nonatomic) double duration;
@property (nonatomic) @? progressCallback;
@property (nonatomic) @? completeCallback;
- (id)completeCallback;
- (void)processDisplayLink:;
- (id)progressCallback;
- (void)setCompleteCallback:;
- (void)setFirstTimestamp:;
- (void)setProgressCallback:;
- (id)displayLink;
- (void)setDisplayLink:;
- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (BOOL)isExecuting;
- (void)setDuration:;
- (void)invalid;
- (void).cxx_destruct;
- (double)duration;
- (void)setExecuting:;
- (double)firstTimestamp;
@end
