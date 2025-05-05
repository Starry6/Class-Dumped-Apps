@interface SFSiriWordTimingPlayer : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) I flags;
@property (nonatomic) double startTime;
@property (nonatomic) NSString text;
@property (nonatomic) @? wordHandler;
@property (nonatomic) NSArray wordTimings;
- (id)init;
- (void)setText:;
- (id)dispatchQueue;
- (void)setStartTime:;
- (void)setDispatchQueue:;
- (double)startTime;
- (void).cxx_destruct;
- (void)setFlags:;
- (unsigned int)flags;
- (id)text;
- (void)invalidate;
- (void)activate;
- (void)_processNextWord;
- (void)_processWord;
- (id)wordHandler;
- (void)setWordHandler:;
- (id)wordTimings;
- (void)setWordTimings:;
@end
