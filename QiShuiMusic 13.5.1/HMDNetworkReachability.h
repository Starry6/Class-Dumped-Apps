@interface HMDNetworkReachability : NSObject
+ (BOOL)isWifiConnected;
+ (BOOL)is2GConnected;
+ (BOOL)is3GConnected;
+ (BOOL)is4GConnected;
+ (BOOL)is5GConnected;
+ (BOOL)isCellPhoneConnected;
+ (BOOL)isCellularAndWLANDisabled;
+ (BOOL)isCellularDisabled;
+ (void)stopNotifier;
+ (BOOL)isConnected;
+ (void)startNotifier;
@end
