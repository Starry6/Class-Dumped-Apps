@interface AMSPaymentSheetResult : NSObject
@property (nonatomic) NSString delegateAuthenticateToken;
@property (nonatomic) NSString passwordEquivalentToken;
@property (nonatomic) NSString paymentToken;
@property (nonatomic) AMSBiometricsSignatureResult signatureResult;
- (void)setPasswordEquivalentToken:;
- (void).cxx_destruct;
- (id)passwordEquivalentToken;
- (id)signatureResult;
- (void)setSignatureResult:;
- (id)delegateAuthenticateToken;
- (void)setDelegateAuthenticateToken:;
- (id)paymentToken;
- (void)setPaymentToken:;
@end
