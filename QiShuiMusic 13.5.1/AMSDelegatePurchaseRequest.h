@interface AMSDelegatePurchaseRequest : AMSDelegateAuthenticateRequest
@property (nonatomic) NSString deviceName;
@property (nonatomic) AMSPurchaseResult purchaseResult;
- (void)setDeviceName:;
- (id)deviceName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithPurchaseResult:challenge:userAgent:;
- (id)purchaseResult;
- (void)setPurchaseResult:;
+ (BOOL)supportsSecureCoding;
@end
