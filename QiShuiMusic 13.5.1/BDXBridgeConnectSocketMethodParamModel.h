@interface BDXBridgeConnectSocketMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString url;
@property (nonatomic) NSDictionary header;
@property (nonatomic) NSArray protocols;
@property (nonatomic) Q preferredReceivedDataType;
- (unsigned long long)preferredReceivedDataType;
- (void)setPreferredReceivedDataType:;
- (void)setHeader:;
- (id)url;
- (id)protocols;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)header;
- (void)setProtocols:;
+ (id)preferredReceivedDataTypeJSONTransformer;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
