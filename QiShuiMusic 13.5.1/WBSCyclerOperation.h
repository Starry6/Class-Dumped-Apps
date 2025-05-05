@interface WBSCyclerOperation : NSObject
@property (nonatomic) @? block;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL executing;
@property (nonatomic) double nextBackoffTimeInterval;
- (id)block;
- (id)init;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)setBlock:;
- (id)initWithMaximumNumberOfAttempts:backoffRatio:;
- (void)executeWithResultHandler:;
- (double)nextBackoffTimeInterval;
@end
