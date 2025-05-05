@interface BDASplashTracker : NSObject
+ (void)trackALogWithErrorLevel:;
+ (void)trackALogWithInfoLevel:;
+ (void)trackALogWithLevel:log:;
+ (void)trackALogWithWarnLevel:;
+ (void)trackEventWithLabel:extra:adExtraData:;
+ (void)trackEventWithLabel:model:extra:adExtraData:;
+ (void)trackEventWithTag:Label:adId:logExtra:extra:adExtraData:;
+ (void)trackMonitorService:metric:category:extra:;
+ (void)trackNoAdEvent:params:;
+ (id)monitor;
@end
