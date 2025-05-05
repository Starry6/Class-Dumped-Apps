@interface BDXBridgeChooseAndUploadMethodResultModel : BDXBridgeModel
@property (nonatomic) NSNumber clientCode;
@property (nonatomic) NSNumber httpCode;
@property (nonatomic) NSDictionary header;
@property (nonatomic) NSDictionary response;
@property (nonatomic) NSArray tempFiles;
- (id)clientCode;
- (void)setClientCode:;
- (void)setTempFiles:;
- (id)tempFiles;
- (void)setHeader:;
- (void)setHttpCode:;
- (id)response;
- (id)httpCode;
- (void).cxx_destruct;
- (id)header;
- (void)setResponse:;
+ (id)tempFilesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
