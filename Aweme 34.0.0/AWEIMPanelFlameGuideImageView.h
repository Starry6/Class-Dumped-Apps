@interface AWEIMPanelFlameGuideImageView : AWEIMPanelView
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UIImageView flameIcon;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel chatDaysLabel;
@property (nonatomic) UILabel textLabel;
- (void)p_setupUI;
- (void)renderWithViewModel:;
- (double)p_calculateChatDaysLabelFontSizeWithText:;
- (id)flameIcon;
- (void)setFlameIcon:;
- (id)chatDaysLabel;
- (void)setChatDaysLabel:;
- (id)textLabel;
- (id)initWithFrame:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (void)setTextLabel:;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)setBgImageView:;
- (id)bgImageView;
@end
