@interface AWEDataLayerFetchDataWrapper : NSObject
@property (nonatomic) AWEDataLayerFetchDataToken token;
@property (nonatomic) AWEDataLayerBaseNetworkProvider networkProvider;
@property (nonatomic) AWEDataLayerFetchDataConfig config;
@property (nonatomic) @? completion;
- (id)trackParamsWithDataSource:hasData:;
- (void)callCompletionWithCacheData:;
- (void)callCompletionWithNetworkData:response:;
- (void)setConfig:;
- (id)completion;
- (id)config;
- (void)setCompletion:;
- (void).cxx_destruct;
- (void)setToken:;
- (id)token;
- (id)networkProvider;
- (void)setNetworkProvider:;
@end
