@interface CPLSyncIndicator : NSObject
+ (void)setForeground:;
+ (void)hideSyncIndicator;
+ (void)_doProtected:;
+ (void)_reallyHideSyncIndicator;
+ (void)_reallyShowSyncIndicator;
+ (void)showSyncIndicator;
@end
