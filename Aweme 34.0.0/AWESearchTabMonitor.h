@interface AWESearchTabMonitor : NSObject
+ (void)trackEventWithType:extra:;
+ (void)uploadTrackDataWithNum:extra:;
+ (void)trackEventWithType:;
@end
