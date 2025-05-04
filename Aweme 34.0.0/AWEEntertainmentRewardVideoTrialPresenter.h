@interface AWEEntertainmentRewardVideoTrialPresenter : AWEEntertainmentBaseVideoTrialPresenter
@property (nonatomic) BOOL didAppearNeedReport;
- (id)trackCommonParams;
- (BOOL)didAppearNeedReport;
- (void)setDidAppearNeedReport:;
- (void)trackTrialDidStart;
- (void)trackTrialDidFinish;
- (void)trackIAAStatusShow:;
- (void)viewDidAppear;
@end
