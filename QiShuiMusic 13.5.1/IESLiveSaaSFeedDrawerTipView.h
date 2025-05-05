@interface IESLiveSaaSFeedDrawerTipView : UIControl
@property (nonatomic) IESLiveSaaSFeedDrawerTipAvatarsView avatarsView;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UILabel titleLabel;
- (void)setAvatarsView:;
- (id)accessArrowView;
- (id)avatarsView;
- (id)avatarsViewWithAvatarUrls:;
- (id)backgroundViewWithFrame:;
- (void)doAvatarAnimation;
- (id)initWithFrame:avatarUrls:;
- (BOOL)isDesViewAvaliable:;
- (void)showAnimationOn:afterDely:duration:completion:;
- (void)stopAvatarAnimation;
- (id)backgroundView;
- (id)textLabel;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (id)titleLabel;
- (double)defaultWidth;
@end
