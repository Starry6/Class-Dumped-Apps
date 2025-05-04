@interface AWELandscapeStatusBarNetworkTypeView : UIView
@property (nonatomic) UILabel cellularTypeLabel;
@property (nonatomic) UIImageView WiFiImageView;
@property (nonatomic) UIImageView cellularImagView;
- (void)__configSubview;
- (void)hideNetworkTypeView;
- (void)__updateNetworkTypeView;
- (void)__handleReachabilityChangedNotification:;
- (id)cellularTypeLabel;
- (id)WiFiImageView;
- (id)cellularImagView;
- (id)__currentCarrierNetworkType;
- (void)showNetworkTypeView;
- (void)setCellularTypeLabel:;
- (void)setWiFiImageView:;
- (void)setCellularImagView:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
@end
