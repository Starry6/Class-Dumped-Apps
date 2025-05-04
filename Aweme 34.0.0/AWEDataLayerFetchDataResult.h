@interface AWEDataLayerFetchDataResult : NSObject
@property (nonatomic) AWEDataLayerFetchDataToken token;
@property (nonatomic) q statusCode;
@property (nonatomic) @ data;
@property (nonatomic) @ responseObject;
@property (nonatomic) q dataSource;
@property (nonatomic) NSError error;
@property (nonatomic) q networkRetryTimes;
@property (nonatomic) AWEDataLayerNetworkMetrics metrics;
- (void)setResponseObject:;
- (long long)networkRetryTimes;
- (void)setNetworkRetryTimes:;
- (long long)statusCode;
- (id)metrics;
- (void)setError:;
- (void)setMetrics:;
- (void)setData:;
- (void).cxx_destruct;
- (id)error;
- (id)data;
- (void)setToken:;
- (void)setDataSource:;
- (void)setStatusCode:;
- (id)token;
- (long long)dataSource;
- (id)responseObject;
@end
