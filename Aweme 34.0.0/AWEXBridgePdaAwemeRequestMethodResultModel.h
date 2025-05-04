@interface AWEXBridgePdaAwemeRequestMethodResultModel : BDXBridgeModel
@property (nonatomic) NSNumber httpCode;
@property (nonatomic) NSNumber clientCode;
@property (nonatomic) @ response;
@property (nonatomic) NSString rawResponse;
@property (nonatomic) NSNumber prefetchStatus;
@property (nonatomic) NSDictionary header;
@property (nonatomic) q responseType;
- (id)httpCode;
- (id)clientCode;
- (id)prefetchStatus;
- (void)setHttpCode:;
- (void)setPrefetchStatus:;
- (void)setClientCode:;
- (id)header;
- (id)response;
- (id)rawResponse;
- (void).cxx_destruct;
- (void)setResponse:;
- (void)setHeader:;
- (long long)responseType;
- (void)setRawResponse:;
- (void)setResponseType:;
+ (id)responseTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
