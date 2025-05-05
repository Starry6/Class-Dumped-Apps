@interface CPLNetworkIndicator : NSObject
+ (void)_doProtected:;
+ (void)_reallyShowNetworkIndicatorForBundleWithIdentifierLocked:;
+ (void)_reallyHideNetworkIndicatorForBundleWithIdentifierLocked:;
+ (void)showNetworkIndicatorForBundleWithIdentifier:;
+ (void)hideNetworkIndicatorForBundleWithIdentifier:;
@end
