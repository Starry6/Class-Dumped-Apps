@interface AWEDataLayerNetworkResponse : NSObject
@property (nonatomic) q retryTimes;
@property (nonatomic) q combineCount;
@property (nonatomic) q statusCode;
@property (nonatomic) @ responseObject;
@property (nonatomic) NSError error;
@property (nonatomic) NSDictionary allHeaderFields;
@property (nonatomic) q responseSize;
@property (nonatomic) AWEDataLayerNetworkMetrics metrics;
- (void)setAllHeaderFields:;
- (void)setResponseObject:;
- (long long)retryTimes;
- (void)setRetryTimes:;
- (long long)combineCount;
- (void)setCombineCount:;
- (BOOL)shouldRetry;
- (long long)statusCode;
- (id)metrics;
- (void)setError:;
- (void)setMetrics:;
- (long long)responseSize;
- (void).cxx_destruct;
- (id)error;
- (void)setResponseSize:;
- (void)setStatusCode:;
- (id)allHeaderFields;
- (id)responseObject;
@end
