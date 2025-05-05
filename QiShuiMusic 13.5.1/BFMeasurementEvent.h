@interface BFMeasurementEvent : NSObject
- (id)initEventWithName:args:;
- (void).cxx_destruct;
- (void)postNotification;
+ (void)postNotificationForEventName:args:;
@end
