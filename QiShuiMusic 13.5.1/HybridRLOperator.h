@interface HybridRLOperator : NSObject
@property (nonatomic) HybridResourceLoaderConfig loaderConfig;
@property (nonatomic) NSMutableDictionary falconPrefixList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)appendPrefixList:withAccessKey:;
- (void)__syncChannels:accessKey:options:completion:;
- (id)falconPrefixList;
- (id)getDefaultAccessKey;
- (id)getFalconPrefixList;
- (id)loaderConfig;
- (unsigned long long)packageVersionForAccessKey:andChannel:;
- (void)registeAccessKey:appendPrefixList:;
- (void)registeAccessKey:withPrefixList:;
- (void)registeDefaultAccessKey:;
- (void)setFalconPrefixList:;
- (void)setLoaderConfig:;
- (void)syncChannelIfNeeded:accessKey:;
- (void)syncChannelIfNeeded:accessKey:completion:;
- (void).cxx_destruct;
@end
