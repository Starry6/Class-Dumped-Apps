@interface IESLiveRevenueInteractPlayComponentEffectInfo : IESLiveRevenueInteractPlayComponent
@property (nonatomic) NSMutableDictionary playContainerViewDict;
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
@property (nonatomic) AnchorEffect_EffectInfo firstActivePropEffect;
- (void)bindAction;
- (void)componentDidUpdateBattleView;
- (void)componentFinished;
- (void)componentInteracting;
- (void)componentPlaying;
- (void)componentPunishing;
- (id)disposable;
- (id)firstActivePropEffect;
- (void)loadPlayContainer;
- (void)loadPlayContainerForBattleView:anchorModel:;
- (id)playContainerViewDict;
- (void)setDisposable:;
- (void)setFirstActivePropEffect:;
- (void)setPlayContainerViewDict:;
- (void).cxx_destruct;
- (void)clean;
@end
