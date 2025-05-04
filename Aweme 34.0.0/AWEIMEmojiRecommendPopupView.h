@interface AWEIMEmojiRecommendPopupView : AWEIMBasePopupView
@property (nonatomic) UIImageView avatarImgView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIButton settingButton;
- (id)avatarImgView;
- (void)setAvatarImgView:;
- (void)setSettingButton:;
- (id)settingButton;
- (void)showTitle:subTitle:setting:confirm:;
- (void)showTitle:subTitle:setting:;
- (void)p_setupUITitle:subTitle:setting:confirm:;
- (id)contentAttributedStringWithString:;
- (id)settingAttributedStringWithString:;
- (void)settingButtonClick:;
- (void)hide;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)contentLabel;
- (void)setContentLabel:;
+ (BOOL)isShowing;
@end
