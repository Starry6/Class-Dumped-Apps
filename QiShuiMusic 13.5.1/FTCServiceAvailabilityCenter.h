@interface FTCServiceAvailabilityCenter : NSObject
- (id)init;
- (void)dealloc;
- (void)_postNotificationForService:availability:;
- (BOOL)removeListenerID:forService:;
- (BOOL)hasListenerID:forService:;
- (BOOL)_isValidServiceType:;
- (BOOL)addListenerID:forService:;
- (id)containerForService:create:;
- (long long)availabilityForListenerID:forService:;
- (void)_startListeningToMonitor:;
- (void)_stopListeningToMonitor:;
- (void)_handleServiceMonitorNotification:;
+ (id)sharedInstance;
@end
