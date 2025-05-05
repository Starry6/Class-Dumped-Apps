@interface IESLiveSaaSToast : UIView
+ (void)dismissToast;
+ (void)showToast:duration:;
+ (void)showToast:onView:duration:;
+ (void)showToast:withImage:;
+ (void)showToast:withImage:duration:;
+ (void)showToastOnAlertWindow:;
+ (void)toastTimeUp:;
+ (void)showToast:;
@end
