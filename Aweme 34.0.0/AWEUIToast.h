@interface AWEUIToast : NSObject
+ (void)showToast:;
+ (void)dismissToast;
+ (void)showToast:withStyle:;
+ (void)showToast:onView:withStyle:;
+ (void)showToast:onViewController:withStyle:;
+ (void)showToast:onView:withFrame:withStyle:;
+ (void)toastTimeUp:;
+ (void)showToast:withImage:;
@end
