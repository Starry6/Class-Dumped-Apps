@interface BUUIResponderHelper : NSObject
+ (id)mainWindowRootViewController;
+ (id)nextNavigationControllerFor:;
+ (id)nextViewControllerFor:;
+ (id)recursiveFindCurrentShowViewControllerFromViewController:;
+ (id)windowSize;
+ (id)topViewController;
+ (id)mainWindow;
@end
