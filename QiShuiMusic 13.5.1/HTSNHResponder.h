@interface HTSNHResponder : NSObject
+ (id)topViewControllerForController:;
+ (void)addIgnoreResponder:;
+ (id)currentShowViewController;
+ (id)ignoreList;
+ (void)removeIgnoreResponder:;
+ (id)rootVC;
+ (id)topNavigationControllerFor:;
+ (id)topViewControllerFor:;
+ (id)topmostView;
+ (id)topmostViewController;
+ (id)topViewController;
+ (id)applicationWindow;
@end
