@interface IESECTTMonitor : NSObject
+ (BOOL)endTimingForKey:service:label:;
+ (Class)serviceImpl;
+ (void)trackService:status:extra:;
+ (void)trackService:value:extra:;
+ (void)startTimingForKey:;
@end
