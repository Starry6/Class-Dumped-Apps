@interface AWEIMCommonOperation : NSOperation
@property (nonatomic) NSObject<OS_dispatch_queue> excuteQueue;
@property (nonatomic) c state;
@property (nonatomic) <AWEIMPiplineCommonTaskProtocol> delegate;
- (void)setExcuteQueue:;
- (id)excuteQueue;
- (id)init;
- (BOOL)isAsynchronous;
- (void)run;
- (id)delegate;
- (BOOL)isExecuting;
- (void)main;
- (void)sync:;
- (char)state;
- (void)finish;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setState:;
- (void)start;
@end
