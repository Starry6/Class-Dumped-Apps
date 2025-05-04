@interface AWEShakeShareAwemeSettingPanel : UIViewController
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) DUXContentSheet sheet;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) AWEShakeShareAwemeSettingItemView settingItemView;
- (id)settingItemView;
- (void)setSettingItemView:;
- (void)initView;
- (void)shakeItemSwitched:;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (void)setIconImageView:;
- (id)sheet;
- (void)setupLayout;
- (void)setSheet:;
+ (void)showPanel;
@end
