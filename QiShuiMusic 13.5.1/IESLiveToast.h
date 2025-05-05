@interface IESLiveToast : UIView
+ (void)dismissToast;
+ (void)showToast:duration:;
+ (void)showToast:onView:duration:;
+ (void)showToast:withImage:;
+ (void)showToast:withImage:duration:;
+ (void)toastTimeUp:;
+ (void)showToast:;
@end
