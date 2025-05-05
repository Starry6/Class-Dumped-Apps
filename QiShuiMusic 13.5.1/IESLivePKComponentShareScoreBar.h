@interface IESLivePKComponentShareScoreBar : IESLiveRevenueInteractPlayComponent
@property (nonatomic) IESLiveRevenueInteractShareScoreBar scoreBar;
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
- (void)componentFinished;
- (void)componentInteracting;
- (void)componentPlaying;
- (void)componentPunishing;
- (id)disposable;
- (void)loadPKScoreBar;
- (id)scoreBar;
- (void)setDisposable:;
- (void)setScoreBar:;
- (void).cxx_destruct;
- (void)clean;
@end
