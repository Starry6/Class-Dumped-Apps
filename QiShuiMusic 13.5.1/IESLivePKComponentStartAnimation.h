@interface IESLivePKComponentStartAnimation : IESLiveRevenueInteractPlayComponent
@property (nonatomic) IESLiveAnimatedImageView normalPKAnimationView;
@property (nonatomic) IESLivePKStartAnchorInfoView ownerView;
@property (nonatomic) IESLivePKStartAnchorInfoView oppositeView;
@property (nonatomic) UIView topInfoView;
@property (nonatomic) NSString customizeSkinURL;
- (void)setTopInfoView:;
- (void)componentFinished;
- (void)componentInteracting;
- (void)componentPlaying;
- (void)componentPunishing;
- (id)customizeSkinURL;
- (void)didStartPlayStartAnimation;
- (void)enableGiftQueueConsumeIfNeed;
- (id)normalPKAnimationView;
- (id)oppositeView;
- (void)setCustomizeSkinURL:;
- (void)setNormalPKAnimationView:;
- (void)setOppositeView:;
- (void)showAnchorInfoAnimationIfNeed;
- (id)startAnimWebpForCustomPK;
- (void)startNormalPKEnterAnimation;
- (void)startPKEnterAnimation;
- (id)topInfoView;
- (id)ownerView;
- (void).cxx_destruct;
- (void)setOwnerView:;
@end
