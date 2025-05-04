@interface AWEIMStreakPetElfWidgetGuideSmallAvatarView : UIView
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UIView customMaskView;
@property (nonatomic) UIView dotView;
@property (nonatomic) UIColor dotColor;
- (void)p_setupUI;
- (void)renderWithAvatarURL:dotColor:;
- (id)customMaskView;
- (void)setCustomMaskView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)dotView;
- (void)setDotView:;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (id)dotColor;
- (void)setDotColor:;
@end
