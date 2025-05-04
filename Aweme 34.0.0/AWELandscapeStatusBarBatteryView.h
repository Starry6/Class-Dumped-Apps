@interface AWELandscapeStatusBarBatteryView : UIView
@property (nonatomic) UILabel levelLabel;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView levelProgressView;
@property (nonatomic) UIImageView chargingImageView;
@property (nonatomic) UIView batteryAnodeView;
- (id)levelLabel;
- (void)setLevelLabel:;
- (void)__configSubviews;
- (void)hideBatteryView;
- (void)__updateBatteryView;
- (void)__handleBatteryStateChangedNotification:;
- (id)batteryAnodeView;
- (id)levelProgressView;
- (id)chargingImageView;
- (double)__batteryWidth;
- (void)showBatteryView;
- (void)setLevelProgressView:;
- (void)setChargingImageView:;
- (void)setBatteryAnodeView:;
- (id)accessibilityLabel;
- (id)init;
- (void)dealloc;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
@end
