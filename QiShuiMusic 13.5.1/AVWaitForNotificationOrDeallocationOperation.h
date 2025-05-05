@interface AVWaitForNotificationOrDeallocationOperation : NSOperation
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (void)dealloc;
- (void)main;
- (void)monitoredObjectHasDeparted;
- (id)initWithObject:notificationNames:;
- (void)_registerForObjectNotifications;
- (void)_unregisterForObjectNotifications;
- (id)_monitoredObject;
- (void)_signalMonitoringIsFinishedIfNeeded;
- (void)_waitUntilFinishedIfNeeded;
- (void)_balanceMonitoringIsFinishedSemaphore;
@end
