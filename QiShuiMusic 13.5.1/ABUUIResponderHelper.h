@interface ABUUIResponderHelper : NSObject
+ (id)mainWindowRootViewController;
+ (id)mainWindowRootViewControllerOfWindow:;
+ (id)nextNavigationControllerFor:;
+ (id)nextViewControllerFor:;
+ (id)recursiveFindCurrentShowViewControllerFromViewController:;
+ (id)topViewControllerOfWindow:;
+ (id)windowSize;
+ (id)topViewController;
+ (id)mainWindow;
@end
