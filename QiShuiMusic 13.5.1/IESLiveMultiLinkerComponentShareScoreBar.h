@interface IESLiveMultiLinkerComponentShareScoreBar : IESLiveRevenueInteractPlayComponent
@property (nonatomic) IESLiveRevenueInteractShareScoreBar scoreBar;
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
- (void)bindAction;
- (void)componentFinished;
- (void)componentPlaying;
- (void)componentPunishing;
- (id)disposable;
- (id)scoreBar;
- (void)setDisposable:;
- (void)setScoreBar:;
- (void)setupScoreBar;
- (void)updateScoreBarFrame;
- (void)dealloc;
- (void).cxx_destruct;
@end
