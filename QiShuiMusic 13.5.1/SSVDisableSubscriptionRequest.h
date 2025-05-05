@interface SSVDisableSubscriptionRequest : SSRequest
@property (nonatomic) SSAuthenticationContext authenticationContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (id)authenticationContext;
- (void)startWithCompletionBlock:;
- (void)setAuthenticationContext:;
- (void).cxx_destruct;
@end
