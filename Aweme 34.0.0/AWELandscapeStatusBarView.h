@interface AWELandscapeStatusBarView : UIView
@property (nonatomic) AWELandscapeStatusBarNetworkTypeView networkTypeView;
@property (nonatomic) UILabel timeLable;
@property (nonatomic) AWELandscapeStatusBarBatteryView batteryView;
@property (nonatomic) NSTimer timer;
@property (nonatomic) BOOL isShowStatusBar;
- (void)__configSubviews;
- (void)showStatusBar:;
- (BOOL)isShowStatusBar;
- (void)setIsShowStatusBar:;
- (void)__updateTimelable;
- (id)timeLable;
- (void)setTimeLable:;
- (void)setTimer:;
- (id)init;
- (id)timer;
- (void)setBatteryView:;
- (void)setNetworkTypeView:;
- (id)batteryView;
- (void).cxx_destruct;
- (void)showStatusBar;
- (id)networkTypeView;
- (void)hideStatusBar;
@end
