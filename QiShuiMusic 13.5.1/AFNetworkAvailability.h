@interface AFNetworkAvailability : NSObject
- (void)removeObserver:;
- (void)_stopObservingAvailability;
- (id)init;
- (void)addObserver:;
- (void)_notifyObservers;
- (void)_availabilityChanged;
- (void)_clearState;
- (BOOL)isAvailable;
- (void)_updateState;
- (void).cxx_destruct;
- (void)_startObservingAvailability;
+ (id)sharedAvailability;
@end
