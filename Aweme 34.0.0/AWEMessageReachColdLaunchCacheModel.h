@interface AWEMessageReachColdLaunchCacheModel : NSObject
@property (nonatomic) NSDictionary coldLaunchRecoveryDict;
@property (nonatomic) NSDictionary requestTimeMap;
@property (nonatomic) double globalLastRequestTime;
- (id)coldLaunchRecoveryDict;
- (void)setColdLaunchRecoveryDict:;
- (id)requestTimeMap;
- (void)setRequestTimeMap:;
- (double)globalLastRequestTime;
- (void)setGlobalLastRequestTime:;
- (void).cxx_destruct;
@end
