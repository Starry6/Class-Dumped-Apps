@interface AWEHPTabbarShowMonitorUtil : NSObject
+ (id)getTabBarController;
+ (void)uploadAlog;
+ (id)needAutoRecover:lastSceneIDList:;
+ (BOOL)isOtherMode;
+ (id)saveLastSceneID:status:lastList:;
+ (BOOL)tabBarIsHidden:;
+ (id)getLastHiddenSceneID:;
+ (id)getTopChildViewController:;
+ (BOOL)isRootViewController:tabBarController:;
+ (id)getWindowTopSubView:;
+ (id)awe_snapshotTabBarImageAfterScreenUpdates:;
+ (BOOL)isBlackOrWhiteImage:lightMode:tolerance:;
+ (id)getTheViewControllerHierarchy:tabBarController:;
+ (BOOL)viewIsHidden:;
+ (id)getTopBarContainer;
+ (id)getTopSubView:withPoint:;
+ (id)getTopChildViewControllerForController:isRoot:;
+ (id)getTopChildViewControllerByHitTest:;
+ (BOOL)isOverlayViewController:isRoot:;
+ (id)awe_snapshotTabBarImage:afterScreenUpdates:;
+ (id)awe_snapshotImage:imageRect:afterScreenUpdates:;
+ (BOOL)topBarIsHidden;
@end
