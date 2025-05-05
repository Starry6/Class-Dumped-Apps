@interface IESLiveMultiLinkerComponentPersonalScoreBar : IESLiveRevenueInteractPlayComponent
@property (nonatomic) NSMutableDictionary scoreBarMap;
@property (nonatomic) IESLiveMultiLinkerBattleRankUpdater rankUpdater;
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRankUpdater:;
- (void)initRankUpdater;
- (void)setScoreBarMap:;
- (void)bindAction;
- (void)componentDidUpdateBattleView;
- (void)componentFinished;
- (void)componentPlaying;
- (void)componentPunishing;
- (id)disposable;
- (void)doRankUpdateAnimationWithItem:completion:;
- (BOOL)isSurvival;
- (id)rankUpdater;
- (id)scoreBarMap;
- (void)setDisposable:;
- (void)showFinalFightAnimation:;
- (id)thinBarColorByFrame:;
- (void)updateHiddenScore:hiddenRank:;
- (void)updateWithSurvivalInfo:;
- (void)dealloc;
- (void).cxx_destruct;
@end
