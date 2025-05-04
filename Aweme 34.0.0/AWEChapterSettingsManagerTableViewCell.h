@interface AWEChapterSettingsManagerTableViewCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) DUXSettingSwitch switchButton;
@property (nonatomic) AWEChapterSettingsManagerItemModel model;
@property (nonatomic) Q cornerType;
- (void)switchStatusChanged:;
- (void)setupCorners;
- (void)highlightWithAnimation;
- (void)highlightWithAnimationWithDuration:dismissDelay:;
- (void)setSwitchButton:;
- (void)setModel:;
- (void)setSubtitleLabel:;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (void)configureWithModel:;
- (unsigned long long)cornerType;
- (void)setCornerType:;
- (id)switchButton;
@end
