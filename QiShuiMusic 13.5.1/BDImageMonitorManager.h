@interface BDImageMonitorManager : NSObject
+ (void)performMonitorCallbackWithLogType:attributes:extra0:extra1:;
+ (void)trackData:logTypeStr:;
+ (void)trackService:metric:category:extra:;
+ (void)trackService:status:extra:;
@end
