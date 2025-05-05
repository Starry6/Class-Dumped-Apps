@interface IESLiveAudienceInteractiveSettingPanelSceneView : UIView
@property (nonatomic) UIImageView icon;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) IESLiveAudienceInteractiveSettingSceneConfiguration configuration;
- (void)bindConfiguration;
- (void)setupConstraints;
- (id)backgroundView;
- (void)setTitleLabel:;
- (id)icon;
- (void)setConfiguration:;
- (id)initWithFrame:;
- (id)configuration;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (id)titleLabel;
- (void)setupViews;
- (void)updateWithConfiguration:;
@end
