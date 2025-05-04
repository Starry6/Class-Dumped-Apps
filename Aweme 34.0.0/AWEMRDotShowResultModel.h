@interface AWEMRDotShowResultModel : NSObject
@property (nonatomic) q showResult;
@property (nonatomic) q showCount;
@property (nonatomic) AWEMRDotCountStrategyResult strategyResult;
@property (nonatomic) AWEBizTabBarItemConfigBadgeModel badgeModel;
- (id)badgeModel;
- (void)setBadgeModel:;
- (long long)showResult;
- (void)setShowResult:;
- (void)setStrategyResult:;
- (id)strategyResult;
- (id)description;
- (void).cxx_destruct;
- (void)setShowCount:;
- (long long)showCount;
@end
