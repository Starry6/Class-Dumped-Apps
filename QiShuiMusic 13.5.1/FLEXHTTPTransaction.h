@interface FLEXHTTPTransaction : FLEXURLTransaction
@property (nonatomic) NSData cachedRequestBody;
@property (nonatomic) NSString requestID;
@property (nonatomic) NSURLResponse response;
@property (nonatomic) NSString requestMechanism;
@property (nonatomic) double latency;
@property (nonatomic) double duration;
- (id)description;
- (id)cachedRequestBody;
- (id)detailString;
- (BOOL)displayAsError;
- (id)requestID;
- (id)response;
- (void)setResponse:;
- (id)requestMechanism;
- (void)setRequestMechanism:;
- (double)latency;
- (void)setLatency:;
- (double)duration;
- (void)setDuration:;
- (void)setCachedRequestBody:;
- (void).cxx_destruct;
+ (id)request:identifier:;
@end
