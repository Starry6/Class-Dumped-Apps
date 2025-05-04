@interface AWEPayMonitor : NSObject
+ (void)trackService:metric:category:extra:;
+ (void)trackService:extra:;
@end
