@interface BDXBridgeUploadImageMethodResultModel : BDXBridgeModel
@property (nonatomic) NSString url;
@property (nonatomic) NSString uri;
@property (nonatomic) NSDictionary response;
- (id)uri;
- (id)url;
- (void)setUrl:;
- (id)response;
- (void).cxx_destruct;
- (void)setResponse:;
- (void)setUri:;
+ (id)JSONKeyPathsByPropertyKey;
@end
