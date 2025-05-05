@interface BDMonitorProtocol : NSObject
+ (void)hmdTrackData:logType:;
+ (void)hmdTrackService:metric:category:extra:;
+ (id)monitorManager;
@end
