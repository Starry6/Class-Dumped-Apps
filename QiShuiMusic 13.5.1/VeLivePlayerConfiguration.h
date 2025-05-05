@interface VeLivePlayerConfiguration : NSObject
@property (nonatomic) BOOL enableSei;
@property (nonatomic) BOOL enableHardwareDecode;
@property (nonatomic) BOOL enableLiveDNS;
@property (nonatomic) BOOL enableStatisticsCallback;
@property (nonatomic) q statisticsCallbackInterval;
@property (nonatomic) q networkTimeoutMs;
@property (nonatomic) q retryIntervalTimeMs;
@property (nonatomic) q retryMaxCount;
- (BOOL)enableHardwareDecode;
- (BOOL)enableLiveDNS;
- (BOOL)enableSei;
- (BOOL)enableStatisticsCallback;
- (long long)networkTimeoutMs;
- (long long)retryIntervalTimeMs;
- (long long)retryMaxCount;
- (void)setEnableHardwareDecode:;
- (void)setEnableLiveDNS:;
- (void)setEnableSei:;
- (void)setEnableStatisticsCallback:;
- (void)setNetworkTimeoutMs:;
- (void)setRetryIntervalTimeMs:;
- (void)setRetryMaxCount:;
- (void)setStatisticsCallbackInterval:;
- (long long)statisticsCallbackInterval;
- (id)init;
- (id)description;
@end
