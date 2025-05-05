@interface HMDConfigHostProvider : NSObject
@property (nonatomic) <HMDConfigHostProviderDataSource> dataSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_hosts:addObjectsFromArray:;
- (id)moduleNetworkProviderConfigHosts;
- (id)moduleNetworkProviderDefaultHosts;
- (id)moduleNetworkProviderInjectedHosts;
- (void)setDataSource:;
- (id)dataSource;
- (void).cxx_destruct;
- (BOOL)shouldEncrypt;
@end
