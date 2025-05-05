@interface AWEIMCommonOperation : NSOperation
@property (nonatomic) NSObject<OS_dispatch_queue> excuteQueue;
@property (nonatomic) c state;
@property (nonatomic) <AWEIMPiplineCommonTaskProtocol> delegate;
- (void)setExcuteQueue:;
- (id)excuteQueue;
- (void)sync:;
- (id)init;
- (void)setState:;
- (void)start;
- (void)setDelegate:;
- (void)finish;
- (BOOL)isExecuting;
- (void)run;
- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (void)main;
- (char)state;
- (id)delegate;
- (void).cxx_destruct;
@end
