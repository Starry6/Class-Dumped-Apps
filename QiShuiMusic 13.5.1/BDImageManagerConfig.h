@interface BDImageManagerConfig : NSObject
@property (nonatomic) BDWebImageStartUpConfig startUpConfig;
@property (nonatomic) BDWebImageCloudControl cloudControl;
@property (nonatomic) double currentFetchInterval;
@property (nonatomic) NSString remoteConfigDescription;
- (void)applyRemoteConfigIfAvailable;
- (void)applyTTNetConfig;
- (id)cloudControl;
- (double)currentFetchInterval;
- (double)lastFetchTime;
- (id)remoteConfigDescription;
- (void)saveLastFetchTime:;
- (void)setCloudControl:;
- (void)setCurrentFetchInterval:;
- (void)setStartUpConfig:;
- (void)startFetchRemoteConfig;
- (void)startTTNetService;
- (id)startUpConfig;
- (void)startUpWithConfig:;
- (double)validFetchInterval;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
