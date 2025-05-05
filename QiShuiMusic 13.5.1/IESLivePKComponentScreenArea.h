@interface IESLivePKComponentScreenArea : IESLiveRevenueInteractPlayComponent
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
@property (nonatomic) UIImageView selfScreenAreaView;
@property (nonatomic) UIImageView oppoScreenAreaView;
@property (nonatomic) q remainTime;
- (void)componentDidClear:;
- (void)componentFinished;
- (void)componentInteracting;
- (void)componentPlaying;
- (void)componentPunishing;
- (id)disposable;
- (void)loadPKScreenAreaView;
- (id)oppoScreenAreaView;
- (long long)remainTime;
- (id)selfScreenAreaView;
- (void)setDisposable:;
- (void)setOppoScreenAreaView:;
- (void)setRemainTime:;
- (void)setSelfScreenAreaView:;
- (void)setupAction;
- (void).cxx_destruct;
- (void)clean;
@end
