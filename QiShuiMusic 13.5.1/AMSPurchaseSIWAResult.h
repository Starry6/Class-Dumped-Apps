@interface AMSPurchaseSIWAResult : NSObject
@property (nonatomic) AMSPurchaseResult purchaseResult;
@property (nonatomic) AMSPurchaseSIWAAuthorizationResult authorizationResult;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)authorizationResult;
- (id)purchaseResult;
- (id)initWithPurchaseResult:authorizationResult:;
- (BOOL)isEqualToPurchaseSIWAResult:;
+ (BOOL)supportsSecureCoding;
@end
