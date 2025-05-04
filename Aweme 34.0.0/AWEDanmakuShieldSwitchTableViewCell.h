@interface AWEDanmakuShieldSwitchTableViewCell : UITableViewCell
@property (nonatomic) UIView topBackgroundView;
@property (nonatomic) UILabel switchDescLabel;
@property (nonatomic) Q scene;
@property (nonatomic) DUXSwitch shieldSwitch;
@property (nonatomic) @? shieldSwitchChange;
- (id)switchDescLabel;
- (void)addSeparateLineForLandScape;
- (id)shieldSwitch;
- (id)shieldSwitchChange;
- (void)setShieldSwitch:;
- (void)setShieldSwitchChange:;
- (void)setSwitchDescLabel:;
- (void)setScene:;
- (unsigned long long)scene;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setTopBackgroundView:;
- (id)topBackgroundView;
- (void)setUpUI;
@end
