@interface BDXBridgeRequestMethodResultModel : BDXBridgeModel
@property (nonatomic) NSNumber httpCode;
@property (nonatomic) NSNumber clientCode;
@property (nonatomic) NSDictionary header;
@property (nonatomic) @ response;
@property (nonatomic) NSString rawResponse;
@property (nonatomic) NSNumber prefetchStatus;
@property (nonatomic) q responseType;
- (id)clientCode;
- (id)prefetchStatus;
- (void)setClientCode:;
- (void)setPrefetchStatus:;
- (void)setHeader:;
- (void)setHttpCode:;
- (id)rawResponse;
- (id)response;
- (id)httpCode;
- (void).cxx_destruct;
- (id)header;
- (void)setResponse:;
- (long long)responseType;
- (void)setRawResponse:;
- (void)setResponseType:;
+ (id)responseTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
