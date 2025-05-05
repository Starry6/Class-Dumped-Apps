@interface CPLEngineSchedulerBlocker : NSObject
@property (nonatomic) NSString reason;
@property (nonatomic) CPLEngineScheduler scheduler;
- (void)dealloc;
- (id)scheduler;
- (id)reason;
- (void)unblock;
- (void).cxx_destruct;
- (id)initWithReason:scheduler:;
@end
