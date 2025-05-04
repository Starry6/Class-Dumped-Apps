@interface AWEAwemeOfflineSettingsHeaderView : UIView
@property (nonatomic) DUXSwitch switchView;
@property (nonatomic) UIButton wifiDesButton;
@property (nonatomic) UILabel wifiDesLabel;
@property (nonatomic) <AWEAwemeOfflineHeaderViewDelegate> delegate;
- (id)wifiDesButton;
- (id)wifiDesLabel;
- (void)clickWifiDesButton;
- (void)updateSwitchViewStateWith:;
- (void)setWifiDesButton:;
- (void)setWifiDesLabel:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
- (void)switchValueChanged:;
- (void)setSwitchView:;
- (id)switchView;
@end
