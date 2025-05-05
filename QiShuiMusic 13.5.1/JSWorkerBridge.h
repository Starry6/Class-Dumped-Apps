@interface JSWorkerBridge : NSObject
@property (nonatomic) NSMutableArray executors;
- (void)addExecutor:;
- (void)executeMethodWithMessage:callback:;
- (void)setExecutors:;
- (void).cxx_destruct;
- (id)executors;
@end
