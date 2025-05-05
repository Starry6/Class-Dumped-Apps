@interface IESLiveSaaSNHResponder : NSObject
+ (id)topViewControllerForController:;
+ (void)addIgnoreResponder:;
+ (id)currentShowViewController;
+ (id)ignoreList;
+ (void)removeIgnoreResponder:;
+ (id)rootVC;
+ (id)topNavigationControllerFor:;
+ (id)topViewControllerFor:;
+ (id)topViewControllerForController:needIgnoreAlertVC:;
+ (id)topViewControllerIgnoreAlertVC;
+ (id)topmostView;
+ (id)topmostViewController;
+ (id)topViewController;
+ (id)applicationWindow;
@end
