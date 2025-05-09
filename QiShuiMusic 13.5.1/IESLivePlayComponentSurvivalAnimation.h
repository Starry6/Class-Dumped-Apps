@interface IESLivePlayComponentSurvivalAnimation : IESLiveRevenueInteractPlayComponent
@property (nonatomic) IESLiveAnimatedImageView stageAnimationView;
@property (nonatomic) NSMutableDictionary eliminateAnimationViews;
@property (nonatomic) NSMutableDictionary eliminateMaskViews;
@property (nonatomic) NSString eliminateAnimationUrl;
@property (nonatomic) Q currentStage;
@property (nonatomic) BOOL isSetup;
@property (nonatomic) BOOL isTrackEliminate;
@property (nonatomic) NSMutableDictionary eliminateUserDic;
- (void)clearEliminateAnimationViewWithUid:;
- (void)clearEliminateMaskViewWithUid:;
- (void)clearStageAnimationView;
- (void)componentDidLoad;
- (void)componentFinished;
- (void)componentPlaying;
- (void)componentPunishing;
- (id)eliminateAnimationUrl;
- (id)eliminateAnimationViews;
- (id)eliminateMaskViews;
- (id)eliminateUserDic;
- (BOOL)isOwnerEliminated;
- (BOOL)isTrackEliminate;
- (void)playEliminateAnimationWithView:uid:;
- (void)playStageAnimationWithUrl:offsetY:;
- (void)playWinAnimation;
- (void)setCurrentStage:;
- (void)setEliminateAnimationUrl:;
- (void)setEliminateAnimationViews:;
- (void)setEliminateMaskViews:;
- (void)setEliminateUserDic:;
- (void)setIsTrackEliminate:;
- (void)setStageAnimationView:;
- (void)showResultAnimationIfNeeded;
- (id)stageAnimationView;
- (void)trackEliminateIfNeeded;
- (void)updateWithSurvivalInfo:;
- (BOOL)isSetup;
- (void)clear;
- (void)setup;
- (void).cxx_destruct;
- (void)setIsSetup:;
- (unsigned long long)currentStage;
@end
