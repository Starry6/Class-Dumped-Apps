@interface IESLiveMultiLinkerComponentScoreBar : IESLiveRevenueInteractPlayComponent
@property (nonatomic) IESLiveMultiLinkerBattleScoreBar scoreBar;
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
@property (nonatomic) q timeThreshold;
@property (nonatomic) BOOL isInFinalTime;
- (void)bindAction;
- (void)componentDidUpdateBattleView;
- (void)componentFinished;
- (void)componentPlaying;
- (void)componentPunishing;
- (id)disposable;
- (BOOL)isInFinalTime;
- (id)scoreBar;
- (void)setDisposable:;
- (void)setIsInFinalTime:;
- (void)setScoreBar:;
- (void)setTimeThreshold:;
- (void)setupScoreBar;
- (long long)timeThreshold;
- (void)updateScoreBarFrame;
- (void)dealloc;
- (void).cxx_destruct;
@end
