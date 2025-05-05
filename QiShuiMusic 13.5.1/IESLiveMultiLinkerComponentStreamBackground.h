@interface IESLiveMultiLinkerComponentStreamBackground : IESLiveRevenueInteractPlayComponent
@property (nonatomic) UIImageView backgroundImage;
@property (nonatomic) UIImageView upBackgroundImage;
@property (nonatomic) UIImageView downBackgroundImage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidLoad;
- (void)componentDidUpdateBattleView;
- (void)componentFinished;
- (void)componentPlaying;
- (void)componentPunishing;
- (id)downBackgroundImage;
- (void)loadStreamBackground;
- (void)playerDidEndplayInSmallWindow;
- (void)pveHandleBattleBg:topImage:bottomImage:;
- (void)setCameraCornerHidden:;
- (void)setDownBackgroundImage:;
- (void)setUpBackgroundImage:;
- (id)upBackgroundImage;
- (void)updateAudienceBackgroundFrame;
- (void)updateBackgroundImage:;
- (void)updateTopBackgroundImage:bottomImageBlock:;
- (void)setBackgroundImage:;
- (id)backgroundImage;
- (void).cxx_destruct;
@end
