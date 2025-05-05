@interface BUNetworkRequest : BUBaseRequest
@property (nonatomic) NSString buRequestUrl;
@property (nonatomic) @ parameter;
@property (nonatomic) q method;
@property (nonatomic) q buRequestSerializerType;
@property (nonatomic) q buResponseSerializerType;
- (id)requestArgument;
- (id)TNCServiceKey;
- (long long)buRequestSerializerType;
- (id)buRequestUrl;
- (long long)buResponseSerializerType;
- (id)failureCompletionBlockWithTNC;
- (id)initWithUrl:method:parameter:;
- (long long)requestSerializerType;
- (long long)responseSerializerType;
- (void)setBuRequestSerializerType:;
- (void)setBuRequestUrl:;
- (void)setBuResponseSerializerType:;
- (id)successCompletionBlockWithTNC;
- (long long)method;
- (id)requestUrl;
- (void).cxx_destruct;
- (void)setMethod:;
- (id)parameter;
- (void)setParameter:;
- (long long)requestMethod;
+ (id)requestWithURL:method:parameter:completionWithSuccess:failure:;
+ (id)requestWithURL:parameter:completionWithSuccess:failure:;
@end
