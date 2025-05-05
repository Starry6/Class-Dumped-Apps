@interface BTDResponder : NSObject
+ (id)topViewControllerForController:;
+ (void)closeTopViewControllerWithAnimated:;
+ (BOOL)isTopViewController:;
+ (id)topNavigationControllerForResponder:;
+ (id)topViewControllerForResponder:;
+ (id)topViewControllerForView:;
+ (id)topViewController;
+ (id)topView;
@end
