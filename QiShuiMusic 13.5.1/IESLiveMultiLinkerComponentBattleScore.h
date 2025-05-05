@interface IESLiveMultiLinkerComponentBattleScore : IESLiveRevenueInteractPlayComponent
@property (nonatomic) NSMutableDictionary battleScoreWidgets;
@property (nonatomic) IESLiveMultiLinkerBattleRankUpdater rankUpdater;
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRankUpdater:;
- (void)initRankUpdater;
- (id)battleScoreWidgets;
- (void)bindAction;
- (void)componentDidLoad;
- (void)componentDidUpdateBattleView;
- (void)componentFinished;
- (void)componentPlaying;
- (void)componentPunishing;
- (id)disposable;
- (void)doRankUpdateAnimationWithItem:completion:;
- (void)giftViewWillDismiss;
- (void)giftViewWillShow;
- (id)rankUpdater;
- (void)setBattleScoreWidgets:;
- (void)setDisposable:;
- (void)setOwnerInfoViewFrameIfNeeded;
- (BOOL)shouldLiftOwnerBattleInfoView;
- (void).cxx_destruct;
@end
