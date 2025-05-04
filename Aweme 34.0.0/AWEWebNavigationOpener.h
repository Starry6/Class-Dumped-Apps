@interface AWEWebNavigationOpener : NSObject
+ (void)transferToWebViewController:sourceController:forbiddenAnimation:;
+ (void)transferToWebViewController:transitionInfo:;
+ (id)topViewController;
@end
