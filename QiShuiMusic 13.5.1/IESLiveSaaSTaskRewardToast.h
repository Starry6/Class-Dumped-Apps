@interface IESLiveSaaSTaskRewardToast : NSObject
+ (id)currentToastView;
+ (void)dismissToast;
+ (void)showToastView:onView:duration:notReplaceAction:;
+ (void)toastTimeUp:;
@end
