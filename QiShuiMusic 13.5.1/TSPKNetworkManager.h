@interface TSPKNetworkManager : NSObject
@property (nonatomic) NSString ipv4NetMask;
@property (nonatomic) NSString localIPV4Address;
@property (nonatomic) NSString ipv6NetMask;
@property (nonatomic) NSString localIPV6Address;
@property (nonatomic) <TSPKLock> lock;
- (void)setIpv6NetMask:;
- (void)setIpv4NetMask:;
- (unsigned long long)checkIPAddressType:;
- (BOOL)checkIfIPAddressInSameSubnet:;
- (BOOL)checkIfIPAddressInSameSubnet:isIPV6:;
- (void)initializeNetworkInfo;
- (id)ipv4NetMask;
- (id)ipv6NetMask;
- (id)localIPV4Address;
- (id)localIPV6Address;
- (void)onNetworkChanged;
- (void)setLocalIPV4Address:;
- (void)setLocalIPV6Address:;
- (id)init;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
- (unsigned long long)currentNetworkStatus;
+ (id)shared;
@end
