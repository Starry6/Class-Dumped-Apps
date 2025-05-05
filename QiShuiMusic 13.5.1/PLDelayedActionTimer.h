@interface PLDelayedActionTimer : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> targetQueue;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) double timeRemaining;
- (void)cancel;
- (id)initWithTargetQueue:;
- (void)dealloc;
- (id)targetQueue;
- (BOOL)isRunning;
- (double)timeRemaining;
- (void).cxx_destruct;
- (id)description;
- (void)afterDelay:performBlock:;
@end
