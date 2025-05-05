@interface BYNetworkMonitor : NSObject
- (void)removeObserver:;
- (id)init;
- (void)addObserver:;
- (void)dealloc;
- (int)currentNetworkType;
- (void)setCurrentNetworkType:;
- (int)_networkTypeFromFlags:;
- (void)withMinimumNetworkType:timeout:runBlock:;
- (void).cxx_destruct;
- (void)_initNetworkObservation;
+ (id)sharedInstance;
+ (BOOL)holdsWiFiAssertion;
+ (void)setHoldsWiFiAssertion:;
@end
