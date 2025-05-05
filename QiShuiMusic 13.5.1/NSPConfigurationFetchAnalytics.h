@interface NSPConfigurationFetchAnalytics : NSPProxyAnalytics
@property (nonatomic) NSString configFetchURL;
@property (nonatomic) q httpCode;
@property (nonatomic) q nsurlErrorCode;
@property (nonatomic) NSString requestedServerUUID;
@property (nonatomic) double latency;
@property (nonatomic) NSString reason;
- (double)latency;
- (void)setLatency:;
- (id)reason;
- (void)setHttpCode:;
- (void)setReason:;
- (id)configFetchURLToIndex;
- (id)eventName;
- (id)configFetchURL;
- (void)setRequestedServerUUID:;
- (long long)httpCode;
- (void).cxx_destruct;
- (id)analyticsDict;
- (id)requestedServerUUID;
- (void)setConfigFetchURL:;
- (void)setNsurlErrorCode:;
- (long long)nsurlErrorCode;
@end
