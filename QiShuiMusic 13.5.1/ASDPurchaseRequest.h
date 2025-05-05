@interface ASDPurchaseRequest : ASDEphemeralRequest
@property (nonatomic) ASDPurchaseRequestOptions options;
- (id)initWithOptions:;
- (void)startWithCompletionBlock:;
+ (long long)requestType;
@end
