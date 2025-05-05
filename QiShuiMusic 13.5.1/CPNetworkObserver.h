@interface CPNetworkObserver : NSObject
- (void)removeObserver:;
- (id)init;
- (void)dealloc;
- (void)_wifiCallBack:;
- (void)removeWiFiObserver:;
- (void)addWiFiObserver:selector:;
- (void)_wifiFirstCallBack:;
- (void)_networkReachableCallBack:;
- (void)_wifiObserversInitialize;
- (BOOL)isWiFiEnabled;
- (void)removeNetworkReachableObserver:;
- (void)_networkObserversInitialize;
- (BOOL)isNetworkReachable;
- (void)addObserver:selector:forHostname:;
- (void)addNetworkReachableObserver:selector:;
- (void)removeObserver:forHostname:;
- (void)_networkReachableFirstCallBack:;
+ (id)sharedNetworkObserver;
@end
