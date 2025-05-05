@interface IESLiveSaaSMessageOptimizeServiceImpl : NSObject
@property (nonatomic) BOOL enableOptimizeTopRank;
@property (nonatomic) q topRankRefreshDelayTime;
@property (nonatomic) BOOL enableOptimizeHoursRank;
@property (nonatomic) q hoursRankRefreshDelayTime;
@property (nonatomic) BOOL enableOptimizeDanmu;
@property (nonatomic) BOOL enableOptimizeRocket;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_configParams;
- (BOOL)enableOptimizeDanmu;
- (BOOL)enableOptimizeHoursRank;
- (BOOL)enableOptimizeRocket;
- (BOOL)enableOptimizeTopRank;
- (long long)hoursRankRefreshDelayTime;
- (void)setEnableOptimizeDanmu:;
- (void)setEnableOptimizeHoursRank:;
- (void)setEnableOptimizeRocket:;
- (void)setEnableOptimizeTopRank:;
- (void)setHoursRankRefreshDelayTime:;
- (void)setTopRankRefreshDelayTime:;
- (long long)topRankRefreshDelayTime;
- (id)init;
@end
