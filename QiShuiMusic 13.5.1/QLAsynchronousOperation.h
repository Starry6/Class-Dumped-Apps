@interface QLAsynchronousOperation : NSOperation
@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;
- (void)setFinished:;
- (void)start;
- (BOOL)isConcurrent;
- (void)finish;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)setExecuting:;
@end
