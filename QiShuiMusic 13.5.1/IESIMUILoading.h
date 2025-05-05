@interface IESIMUILoading : NSObject
+ (void)dismissWindowLoading;
+ (void)dismissWindowLoadingWithAnimated:;
+ (id)showLoadingAndDisableUserInteractionOnView:;
+ (id)showLoadingOnView:;
+ (id)showLoadingOnView:animated:;
+ (id)showLoadingOnView:title:animated:;
+ (id)showLoadingOnView:withTitle:;
+ (id)showLoadingWithBackgroundOnView:;
+ (id)showTransparentLoadingAndDisableUserInteractionOnView:;
+ (id)showWindowLoading;
+ (id)showWindowLoadingWithAnimated:;
+ (id)showWindowLoadingWithTitle:;
+ (id)showWindowLoadingWithTitle:animated:;
@end
