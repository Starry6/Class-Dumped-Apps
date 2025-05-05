@interface AVObservationController : NSObject
- (void)dealloc;
- (id)startObserving:keyPaths:observationHandler:;
- (id)startObserving:keyPaths:includeInitialValue:observationHandler:;
- (id)startObserving:keyPath:includeInitialValue:observationHandler:;
- (void)startObservingNotificationForName:object:notificationCenter:observationHandler:;
- (id)startObserving:keyPaths:includeInitialValue:includeChanges:observationHandler:;
- (id)initWithOwner:;
- (id)startObserving:keyPath:observationHandler:;
- (void).cxx_destruct;
- (void)stopObserving:;
- (void)_stopAllObservation;
- (void)stopAllObservation;
@end
