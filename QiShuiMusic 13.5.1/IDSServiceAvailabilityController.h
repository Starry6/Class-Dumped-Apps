@interface IDSServiceAvailabilityController : NSObject
- (id)init;
- (void)dealloc;
- (void)_postNotificationForService:availability:;
- (BOOL)removeListenerID:forService:;
- (BOOL)hasListenerID:forService:;
- (BOOL)_isValidServiceType:;
- (void).cxx_destruct;
- (BOOL)addListenerID:forService:;
- (id)containerForService:create:;
- (long long)availabilityForListenerID:forService:;
- (void)_startListeningToMonitor:;
- (void)_stopListeningToMonitor:;
- (void)_handleServiceMonitorNotification:;
+ (id)sharedInstance;
@end
