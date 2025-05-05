@interface AVCaptureProprietaryDefaultsSingleton : NSObject
- (int)retryPriorFailedKeyObservationRegistrations;
- (id)init;
- (void)setObject:forKey:;
- (void)removeObserver:forKey:;
- (void)dealloc;
- (void)addObserver:forKey:callHandlerForInitialValue:defaultChangedHandler:;
- (void)_handleNotification:payload:;
- (int)_registerWithServerToObserveKey:;
- (void)_handleDefaultChangedNotificationForKey:newValue:callHandlersAsync:;
- (void)_updateProprietaryDefaultsSource:;
- (id)objectForKey:;
- (void)_runBlockOnProprietaryDefaultsSourceQueue:;
+ (int)retryPriorFailedKeyObservationRegistrations;
+ (void)setObject:forKey:;
+ (void)removeObserver:forKey:;
+ (void)addObserver:forKey:callHandlerForInitialValue:defaultChangedHandler:;
+ (id)proprietaryDefaultsSingleton;
+ (id)objectForKey:;
+ (void)updateProprietaryDefaultsSource;
@end
