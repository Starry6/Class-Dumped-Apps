@interface BDUGSyncMonitor : NSObject
@property (nonatomic) HMDTTMonitor monitor;
@property (nonatomic) NSString appID;
@property (nonatomic) NSString sdkVersion;
@property (nonatomic) q receiveSyncLogTime;
@property (nonatomic) double startSyncTime;
- (void)registerMonitor;
- (long long)receiveSyncLogTime;
- (void)setReceiveSyncLogTime:;
- (void)setStartSyncTime:;
- (double)startSyncTime;
- (void)trackService:metric:category:extra:;
- (void)trackService:timeConsume:synclog:;
- (id)init;
- (void)setMonitor:;
- (void)setAppID:;
- (id)appID;
- (void).cxx_destruct;
- (id)monitor;
- (id)sdkVersion;
- (void)setSdkVersion:;
+ (id)shareInstance;
@end
