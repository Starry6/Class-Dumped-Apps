@interface IESLiveTeamFightUIComponentTeamBackground : IESLiveTeamFightUIComponent
@property (nonatomic) IESLiveGradientView ownerBGView;
@property (nonatomic) IESLiveGradientView oppoBGView;
@property (nonatomic) IESLiveTeamFightBorderView borderView;
@property (nonatomic) UIImageView backgroundView;
@property (nonatomic) BOOL hasSetBg;
- (void)setOwnerBGView:;
- (void)componentFinished;
- (void)componentPrepare;
- (void)componentTeamFighting;
- (BOOL)hasSetBg;
- (BOOL)isTeamFightFlexible;
- (BOOL)needSetTeamFightBGView;
- (id)oppoBGView;
- (id)ownerBGView;
- (void)removeBGView;
- (void)setHasSetBg:;
- (void)setOppoBGView:;
- (void)showTeamFightBGView;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (id)borderView;
- (void)setBorderView:;
@end
