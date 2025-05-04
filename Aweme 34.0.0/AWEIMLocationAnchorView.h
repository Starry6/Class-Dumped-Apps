@interface AWEIMLocationAnchorView : UIView
@property (nonatomic) UIImageView iconBackgroundImageView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIView titleBackgroundView;
@property (nonatomic) UIImageView titleIconImageView;
@property (nonatomic) UILabel titleLabel;
- (void)updateIconWithUser:showLargeAvatar:;
- (void)updateTitle:titleFontSize:;
- (void)triggerShowAniamtion;
- (void)p_setupIconUIWithConfig:;
- (void)p_setupTitleUIWithConfig:;
- (void)updateUIHiddenWithStyle:;
- (id)iconBackgroundImageView;
- (id)titleBackgroundView;
- (void)setIconBackgroundImageView:;
- (void)setTitleBackgroundView:;
- (id)initWithConfig:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void)clearContent;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setTitleIconImageView:;
- (id)titleIconImageView;
@end
