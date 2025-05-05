@interface AMSPurchaseSIWAAuthorizationResult : NSObject
@property (nonatomic) AKAuthorization authorization;
@property (nonatomic) NSError error;
@property (nonatomic) <AKCredential> authorizationCredential;
- (id)authorization;
- (void)setError:;
- (void)setAuthorization:;
- (id)error;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithAuthorization:error:;
- (BOOL)isEqualToPurchaseSIWAAuthorizationResult:;
- (id)authorizationCredential;
+ (BOOL)supportsSecureCoding;
@end
