@interface IESLiveAudienceInteractiveSettingPlayModeSwitchView : UIView
@property (nonatomic) UIImageView icon;
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) IESLiveAudienceInteractiveSettingPlayModeConfiguration configuration;
- (void)setupConstraints;
- (void)setTitleLabel:;
- (id)containerView;
- (void)setContainerView:;
- (id)icon;
- (void)setConfiguration:;
- (id)initWithFrame:;
- (id)configuration;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupViews;
- (void)updateWithConfiguration:;
@end
