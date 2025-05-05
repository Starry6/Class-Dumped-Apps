@interface AWEIMEmojiRecommendPopupView : AWEIMBasePopupView
@property (nonatomic) UIImageView avatarImgView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIButton settingButton;
- (id)avatarImgView;
- (id)contentAttributedStringWithString:;
- (void)p_setupUITitle:subTitle:setting:;
- (void)setAvatarImgView:;
- (void)setSettingButton:;
- (id)settingAttributedStringWithString:;
- (id)settingButton;
- (void)settingButtonClick:;
- (void)showTitle:subTitle:setting:;
- (void)setTitleLabel:;
- (void)hide;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)mainWindow;
+ (BOOL)isShowing;
@end
