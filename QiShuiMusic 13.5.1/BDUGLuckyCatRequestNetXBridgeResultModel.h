@interface BDUGLuckyCatRequestNetXBridgeResultModel : BDXBridgeModel
@property (nonatomic) NSNumber httpCode;
@property (nonatomic) NSDictionary header;
@property (nonatomic) NSDictionary response;
@property (nonatomic) NSString prefetchStatus;
- (id)prefetchStatus;
- (void)setPrefetchStatus:;
- (void)setHeader:;
- (void)setHttpCode:;
- (id)response;
- (id)httpCode;
- (void).cxx_destruct;
- (id)header;
- (void)setResponse:;
+ (id)JSONKeyPathsByPropertyKey;
@end
