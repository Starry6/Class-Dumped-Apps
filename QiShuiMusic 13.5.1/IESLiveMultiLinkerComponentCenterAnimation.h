@interface IESLiveMultiLinkerComponentCenterAnimation : IESLiveRevenueInteractPlayComponent
@property (nonatomic) IESLiveAnimatedImageView enterAnimationView;
@property (nonatomic) IESLiveAnimatedImageView endAnimationView;
@property (nonatomic) UIView topInfoView;
- (void)setTopInfoView:;
- (void)componentDidLoad;
- (void)componentPlaying;
- (void)componentPunishing;
- (id)customizeSkinURL:;
- (id)endAnimationView;
- (id)enterAnimationView;
- (void)finishBattleEnterAnimation;
- (BOOL)isVote;
- (void)setEndAnimationView:;
- (void)setEnterAnimationView:;
- (void)showResultAnimationIfNeeded;
- (void)showToastIfNeeded;
- (id)startAnimWebpForCustomPK;
- (void)startBattleEndAnimation:;
- (void)startBattleEnterAnimation;
- (id)topInfoView;
- (void).cxx_destruct;
@end
