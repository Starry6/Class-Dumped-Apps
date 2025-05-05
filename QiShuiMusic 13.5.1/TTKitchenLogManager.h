@interface TTKitchenLogManager : NSObject
@property (nonatomic) NSDictionary allLogs;
@property (nonatomic) NSObject<OS_dispatch_queue> logQueue;
@property (nonatomic) Q maxLogCount;
- (id)allLogs;
- (void)setMaxLogCount:;
- (void)addCurrentLogEntry:;
- (id)getLog;
- (unsigned long long)maxLogCount;
- (void)setAllLogs:;
- (id)init;
- (id)logQueue;
- (void)setLogQueue:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
