@interface AWEPOIDetailPrefetchStrategy : NSObject
@property (nonatomic) q networkErrorCounter;
@property (nonatomic) AWEPOIPrefetchThreshold threshold;
- (void)setNetworkErrorCounter:;
- (long long)networkErrorCounter;
- (void)trackReachThreshold:;
- (BOOL)isMatchStrategyWithKey:;
- (void)didRequestFinishWithKey:success:error:;
- (id)threshold;
- (id)init;
- (void)setThreshold:;
- (void).cxx_destruct;
@end
