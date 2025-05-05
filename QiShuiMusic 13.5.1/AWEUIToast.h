@interface AWEUIToast : NSObject
+ (void)dismissToast;
+ (void)showToast:onView:withFrame:withStyle:;
+ (void)showToast:onView:withStyle:;
+ (void)showToast:onViewController:withStyle:;
+ (void)showToast:withImage:;
+ (void)showToast:withStyle:;
+ (void)toastTimeUp:;
+ (void)showToast:;
@end
