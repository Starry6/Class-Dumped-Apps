@interface BDUPCMonitor : NSObject
+ (void)trackService:category:;
+ (void)trackService:metric:category:extra:;
@end
