@interface BDXBridgeDownloadFileMethodResultModel : BDXBridgeModel
@property (nonatomic) NSNumber clientCode;
@property (nonatomic) NSNumber httpCode;
@property (nonatomic) NSDictionary header;
@property (nonatomic) NSDictionary response;
@property (nonatomic) NSString filePath;
- (id)clientCode;
- (void)setClientCode:;
- (id)filePath;
- (void)setHeader:;
- (void)setFilePath:;
- (void)setHttpCode:;
- (id)response;
- (id)httpCode;
- (void).cxx_destruct;
- (id)header;
- (void)setResponse:;
+ (id)JSONKeyPathsByPropertyKey;
@end
