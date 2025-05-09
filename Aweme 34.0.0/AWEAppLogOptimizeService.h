@interface AWEAppLogOptimizeService : NSObject
@property (nonatomic) q limitRequestCountForBadNet;
@property (nonatomic) q limitRequestCountForBadNetWhenExposure;
@property (nonatomic) q limitRequestCountForLaunchStage;
@property (nonatomic) BOOL limitRequestLockForLaunchStage;
- (BOOL)enableLimitRequestWhenBadNet;
- (BOOL)enableLimitRequestWhenLaunch;
- (BOOL)enableAppLogBadNetExposureOpt;
- (BOOL)shouldLimitRequestWhenBadNet;
- (BOOL)shouldLimitRequestWhenLaunch:;
- (BOOL)shouldLimitRequestWhenBadNetWithExposure;
- (BOOL)enableLimitRequestWhenNoNet;
- (BOOL)p_isWeakNetwork;
- (BOOL)judgeWeakNetworkWithLastRequestStatus;
- (long long)limitRequestCountForBadNet;
- (void)setLimitRequestCountForBadNet:;
- (long long)limitRequestPassInterval;
- (long long)weakNetworkMaxConnectionType;
- (BOOL)enableLimitRequestWhenBadNetWithExposure;
- (long long)limitRequestCountForBadNetWhenExposure;
- (void)setLimitRequestCountForBadNetWhenExposure:;
- (BOOL)limitRequestLockForLaunchStage;
- (long long)maxLimitRequestCountForLaunchStage;
- (long long)limitRequestCountForLaunchStage;
- (BOOL)isTargetBatchIntervalForLaunchLimitRequest:;
- (void)setLimitRequestCountForLaunchStage:;
- (void)setLimitRequestLockForLaunchStage:;
- (id)limitRequestWhenBadNetStateConfig;
- (id)limitRequestWhenLaunchStateConfig;
- (BOOL)enableLimitRequest;
- (BOOL)shouldLimitCurrentRequest:;
+ (id)sharedInstance;
@end
