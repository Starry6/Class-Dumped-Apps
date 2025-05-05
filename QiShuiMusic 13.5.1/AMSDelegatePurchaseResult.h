@interface AMSDelegatePurchaseResult : AMSDelegateAuthenticateResult
@property (nonatomic) AMSDelegatePurchaseRequest request;
- (id)initWithCoder:;
- (id)request;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setRequest:;
+ (BOOL)supportsSecureCoding;
@end
