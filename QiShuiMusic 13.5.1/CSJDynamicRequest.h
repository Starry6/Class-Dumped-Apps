@interface CSJDynamicRequest : CSJAdNetworkRequest
@property (nonatomic) double networkTimeout;
- (unsigned long long)bu_requestCachePolicy;
- (double)requestTimeoutInterval;
- (double)networkTimeout;
- (void)setNetworkTimeout:;
+ (id)requestWithURL:method:networkTimeout:parameter:completionWithSuccess:failure:;
@end
