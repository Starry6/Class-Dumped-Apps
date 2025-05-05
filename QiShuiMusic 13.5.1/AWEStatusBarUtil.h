@interface AWEStatusBarUtil : NSObject
+ (BOOL)currentStatusBarHiddenState;
+ (BOOL)viewControllerBasedStatusBarAppearanceEnabled;
+ (long long)defaultStatusBarStyle;
+ (long long)currentStatusBarStyle;
@end
