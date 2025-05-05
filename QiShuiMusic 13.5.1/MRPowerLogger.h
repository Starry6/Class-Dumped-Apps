@interface MRPowerLogger : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (void).cxx_destruct;
- (id)initWithQueue:;
- (id)queue;
- (void)logEvent:withInfo:;
+ (id)sharedLogger;
@end
