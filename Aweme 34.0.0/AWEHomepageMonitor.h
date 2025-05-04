@interface AWEHomepageMonitor : NSObject
+ (void)trackCurrentThreadWithAuthor:aggregationKey:filters:description:callback:;
+ (void)sendMonitorEvent:params:;
+ (void)sendMonitorEvent:metric:category:extra:;
@end
