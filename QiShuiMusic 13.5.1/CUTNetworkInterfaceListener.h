@interface CUTNetworkInterfaceListener : NSObject
@property (nonatomic) NSInteger wifiState;
@property (nonatomic) NSInteger cellState;
@property (nonatomic) NSSet IPv6Addresses;
@property (nonatomic) NSSet IPv4Addresses;
- (id)allocWithZone:;
- (void)addDelegate:;
- (id)IPv6Addresses;
- (id)IPv4Addresses;
- (id)init;
- (void)dealloc;
- (void)removeDelegate:;
- (int)wifiState;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)_handleNetworkChange:;
- (void)_notifyDelegatesOfWifiChange:;
- (void)_notifyDelegatesOfCellChange:;
- (void)_notifyDelegatesOfAddressChange:isIPv6:;
- (int)cellState;
+ (id)sharedInstance;
@end
