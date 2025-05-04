@interface AWETeenFeedSegmentItemView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView yellowDot;
@property (nonatomic) UIImageView channelSwitch;
- (void)p_setupUI;
- (id)yellowDot;
- (void)setYellowDot:;
- (void)channelSwitchTurnOn:isDark:;
- (void)updateTitleName:;
- (void)updateTitleColor:isDark:;
- (void)shouldShowChannelSwitch:;
- (void)shouldShowYellowDot:;
- (BOOL)isShowYellowDot;
- (void)updateTitleAlpha:;
- (id)channelSwitch;
- (void)setChannelSwitch:;
- (id)initWithTitle:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
@end
