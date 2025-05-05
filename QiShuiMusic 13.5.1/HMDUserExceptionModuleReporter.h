@interface HMDUserExceptionModuleReporter : HMDExceptionModuleReporter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)moduleNetworkProviderConfigHosts;
- (id)moduleNetworkProviderDefaultHosts;
- (id)moduleNetworkProviderInjectedHosts;
- (id)moduleNetworkProvier;
- (id)uploadPath;
- (BOOL)shouldEncrypt;
@end
