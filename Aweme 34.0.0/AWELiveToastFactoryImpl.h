@interface AWELiveToastFactoryImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showHUD:;
- (void)showDuxToast:;
- (void)showHUD:duration:;
- (void)showHUD:inView:;
- (void)hideHUD;
- (void)showTopToast:;
- (void)showTopToast:duration:discardable:priority:gradientFromColor:gradientToColor:;
- (void)showTopAttributedToast:duration:discardable:priority:gradientFromColor:gradientToColor:;
- (void)showTopCustomView:duration:;
- (void)showSuccessHUD:;
- (void)showErrorHUD:;
- (void)showCenterToast:canDismissByClickMask:canShowCloseIcon:image:title:subTitle:mainTitle:assitTitle:mainBlock:assitBlock:closeBlock:completion:;
- (void)showCenterToast:canDismissByClickMask:image:title:subTitle:mainTitle:assitTitle:mainBlock:assitBlock:completion:;
- (void)adapter_showToast:;
- (void)adapter_showToast:inView:duration:;
- (void)observeLiveToast:;
- (void)adapter_showCustomView:;
@end
