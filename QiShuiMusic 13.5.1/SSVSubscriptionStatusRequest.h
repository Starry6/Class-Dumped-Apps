@interface SSVSubscriptionStatusRequest : SSRequest
@property (nonatomic) BOOL authenticatesIfNecessary;
@property (nonatomic) NSString localizedAuthenticationReason;
@property (nonatomic) SSAuthenticationContext authenticationContext;
@property (nonatomic) q carrierBundleProvisioningStyle;
@property (nonatomic) NSString reason;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (id)authenticationContext;
- (void)setCarrierBundleProvisioningStyle:;
- (void)startWithCompletionBlock:;
- (void)setAuthenticationContext:;
- (id)reason;
- (void)setReason:;
- (long long)carrierBundleProvisioningStyle;
- (void).cxx_destruct;
- (void)startWithStatusResponseBlock:;
- (BOOL)authenticatesIfNecessary;
- (void)setAuthenticatesIfNecessary:;
- (id)localizedAuthenticationReason;
- (void)setLocalizedAuthenticationReason:;
+ (BOOL)_allowMultipleCallbacks;
+ (long long)requestMessage;
@end
