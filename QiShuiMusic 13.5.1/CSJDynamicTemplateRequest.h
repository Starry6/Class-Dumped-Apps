@interface CSJDynamicTemplateRequest : CSJAdNetworkRequest
- (unsigned long long)bu_requestCachePolicy;
+ (id)requestWithURL:method:parameter:completionWithSuccess:failure:;
@end
