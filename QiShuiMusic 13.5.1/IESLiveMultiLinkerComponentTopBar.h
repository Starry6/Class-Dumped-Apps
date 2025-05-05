@interface IESLiveMultiLinkerComponentTopBar : IESLiveRevenueInteractPlayComponent
@property (nonatomic) IESLiveMultiLinkerBattleTopBar topBar;
@property (nonatomic) <IESLiveSubscription> disposable;
@property (nonatomic) BOOL isStealTower;
@property (nonatomic) q timeThreshold;
- (void)bindAction;
- (void)componentDidLoad;
- (void)componentDidUpdateBattleView;
- (void)componentFinished;
- (void)componentPlaying;
- (void)componentPunishing;
- (id)disposable;
- (BOOL)isStealTower;
- (BOOL)isSurvival;
- (void)removeTopBar;
- (void)setDisposable:;
- (void)setIsStealTower:;
- (void)setTimeThreshold:;
- (void)setupTopBar;
- (long long)timeThreshold;
- (void)trackTopBarShow:;
- (void)updateTopBarFrame;
- (void)updateWithSurvivalInfo:;
- (id)topBar;
- (void)setTopBar:;
- (void).cxx_destruct;
@end
