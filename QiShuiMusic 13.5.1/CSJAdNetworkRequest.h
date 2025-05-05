@interface CSJAdNetworkRequest : BUNetworkRequest
@property (nonatomic) BOOL isStatsRequest;
- (id)TNCServiceKey;
- (id)failureCompletionBlock;
- (id)initWithUrl:method:parameter:;
- (BOOL)isStatsRequest;
- (id)requestHeaderFieldValueDictionary;
- (void)setIsStatsRequest:;
- (id)successCompletionBlock;
- (id)baseUrl;
+ (id)bu_base_URL;
@end
