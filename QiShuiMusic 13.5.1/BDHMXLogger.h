@interface BDHMXLogger : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
- (void)logWithTag:level:file:func:line:message:builder:;
- (id)init;
- (id)serialQueue;
- (void).cxx_destruct;
- (void)setSerialQueue:;
+ (void)logWithTag:level:file:func:line:message:builder:;
+ (id)sharedInstance;
@end
