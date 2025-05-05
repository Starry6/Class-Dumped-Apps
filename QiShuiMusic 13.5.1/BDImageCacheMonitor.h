@interface BDImageCacheMonitor : NSObject
@property (nonatomic) NSMutableDictionary monitorModels;
@property (nonatomic) NSObject<OS_dispatch_queue> monitorQueue;
@property (nonatomic) q allCount;
@property (nonatomic) BOOL monitorEnable;
@property (nonatomic) q trackInterval;
- (long long)allCount;
- (BOOL)monitorEnable;
- (id)monitorModels;
- (void)onRecordType:bizTag:;
- (void)setAllCount:;
- (void)setMonitorEnable:;
- (void)setMonitorModels:;
- (void)setTrackInterval:;
- (void)trackRecursively;
- (id)init;
- (void).cxx_destruct;
- (void)trackData;
- (id)monitorQueue;
- (void)setMonitorQueue:;
- (long long)trackInterval;
@end
