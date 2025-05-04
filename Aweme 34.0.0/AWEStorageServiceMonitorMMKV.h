@interface AWEStorageServiceMonitorMMKV : NSObject
@property (nonatomic) NSMutableDictionary dictionary;
@property (nonatomic) NSObject<OS_dispatch_queue> workQueue;
@property (nonatomic) BOOL shouldRecord;
@property (nonatomic) q mmkvThreshold;
- (void)setMMKVRecordMaxCount:;
- (void)reportIfExceedThreshold;
- (void)recordMMKV:withKey:;
- (BOOL)shouldRecord;
- (void)setShouldRecord:;
- (long long)mmkvThreshold;
- (void)setMmkvThreshold:;
- (id)init;
- (id)workQueue;
- (id)dictionary;
- (void)setDictionary:;
- (void)setWorkQueue:;
- (void).cxx_destruct;
- (void)startMonitor;
+ (id)sharedInstance;
@end
