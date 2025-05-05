@interface BDXRLOperator : NSObject
@property (nonatomic) BDXResourceLoader resourceLoader;
- (void)appendPrefixList:withAccessKey:;
- (void)__syncChannels:accessKey:options:modelActivePolicy:completion:;
- (void)appendPrefixToAk:;
- (void)registeAccessKey:appendPrefixList:;
- (void)registeAccessKey:withPrefixList:;
- (void)registeDefaultAccessKey:;
- (void)syncChannelIfNeeded:accessKey:completion:;
- (void)syncChannelIfNeeded:accessKey:modelActivePolicy:completion:;
- (void)setResourceLoader:;
- (void).cxx_destruct;
- (id)resourceLoader;
@end
