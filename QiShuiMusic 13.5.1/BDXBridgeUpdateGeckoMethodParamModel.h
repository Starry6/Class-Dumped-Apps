@interface BDXBridgeUpdateGeckoMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString channel;
@property (nonatomic) BOOL enableDownloadAutoRetry;
- (BOOL)enableDownloadAutoRetry;
- (void)setEnableDownloadAutoRetry:;
- (void)setChannel:;
- (id)channel;
- (void).cxx_destruct;
- (id)accessKey;
- (void)setAccessKey:;
+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;
@end
