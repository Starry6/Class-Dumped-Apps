@interface SecCoreAnalytics : NSObject
+ (void)sendEventLazy:builder:;
+ (id)appNameFromPath:;
+ (void)sendEvent:event:;
@end
