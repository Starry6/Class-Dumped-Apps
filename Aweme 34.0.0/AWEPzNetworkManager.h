@interface AWEPzNetworkManager : NSObject
@property (nonatomic) MMKV mmkv;
@property (nonatomic) @? isDomainRegisterBlock;
@property (nonatomic) @? isStrategyRegisterBlock;
- (id)mmkv;
- (void)requestComponentDataWithRequests:requestType:completion:;
- (void)setIsDomainRegisterBlock:;
- (void)setIsStrategyRegisterBlock:;
- (id)getDomainConfigWithDomainName:;
- (id)storageKeyWithDomainName:;
- (id)tryGetHomePageDomainConfigInOldConfigWithError:;
- (BOOL)p_checkDomainModel:error:nonSupportStrategies:;
- (BOOL)p_checkConfigModel:error:;
- (void)p_requestComponentDataWithRequests:requestType:sessionID:completion:;
- (id)p_checkConfigModel:;
- (BOOL)cacheDomain:data:;
- (void)p_requestComponentDataWithURl:requestType:hashMap:uid:sessionID:retryCount:completion:;
- (id)isDomainRegisterBlock;
- (id)isStrategyRegisterBlock;
- (void).cxx_destruct;
+ (id)mmkv;
+ (void)preloadDomainConfig;
+ (id)storageKeyWithDomainName:;
+ (id)getDomainConfigCacheWithDomainName:;
@end
