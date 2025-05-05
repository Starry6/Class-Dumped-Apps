@interface BDAResponderHelper : NSObject
+ (BOOL)_isPadProDevice;
+ (id)applicationSize;
+ (BOOL)_isPadDevice;
+ (id)correctTopNavigationControllerFor:;
+ (id)correctTopViewControllerFor:;
+ (id)correctTopmostView;
+ (id)correctTopmostViewController;
+ (id)mainWindowRootViewController;
+ (double)paddingForViewWidth:;
+ (id)splitViewFrameForView:;
+ (id)topNavigationControllerFor:;
+ (id)topViewControllerFor:;
+ (id)topmostView;
+ (id)topmostViewController;
+ (id)windowSize;
+ (id)screenSize;
+ (id)screenResolution;
+ (id)mainWindow;
@end
