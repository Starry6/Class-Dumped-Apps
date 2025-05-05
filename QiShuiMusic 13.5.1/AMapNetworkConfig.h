@interface AMapNetworkConfig : NSObject
@property (nonatomic) NSMutableDictionary ipv6HostStatist;
@property (nonatomic) BOOL ipV6Cloud;
@property (nonatomic) BOOL enableIPV6;
@property (nonatomic) NSString proxyAddress;
@property (nonatomic) AMapIPV6NetConfig netConfig;
- (id)ipv6HostStatist;
- (BOOL)enableIPV6;
- (BOOL)ipV6Cloud;
- (BOOL)isUseIPV6WithReformer:;
- (void)loadFromLocalCache;
- (id)netConfig;
- (id)proxyAddress;
- (void)saveToLocalCache;
- (void)setEnableIPV6:;
- (void)setIpV6Cloud:;
- (void)setIpv6HostStatist:;
- (void)setNetConfig:;
- (void)setProxyAddress:;
- (void)statistIpV6:error:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
