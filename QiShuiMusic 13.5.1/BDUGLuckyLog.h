@interface BDUGLuckyLog : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) BOOL enableLog;
@property (nonatomic) @? log;
- (BOOL)enableLog;
- (void)logWithTag:level:file:func:line:message:builder:;
- (void)setEnableLog:;
- (id)init;
- (id)log;
- (id)serialQueue;
- (void)setLog:;
- (void).cxx_destruct;
- (void)log:;
- (void)setSerialQueue:;
+ (id)sharedInstance;
@end
