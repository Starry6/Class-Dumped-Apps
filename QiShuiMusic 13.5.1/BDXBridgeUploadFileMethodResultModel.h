@interface BDXBridgeUploadFileMethodResultModel : BDXBridgeModel
@property (nonatomic) NSString url;
@property (nonatomic) @ response;
@property (nonatomic) NSNumber clientCode;
@property (nonatomic) NSNumber httpCode;
@property (nonatomic) NSDictionary header;
- (id)clientCode;
- (void)setClientCode:;
- (void)setHeader:;
- (id)url;
- (void)setHttpCode:;
- (void)setUrl:;
- (id)response;
- (id)httpCode;
- (void).cxx_destruct;
- (id)header;
- (void)setResponse:;
+ (id)JSONKeyPathsByPropertyKey;
@end
