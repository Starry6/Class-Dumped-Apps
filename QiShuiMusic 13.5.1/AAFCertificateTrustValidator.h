@interface AAFCertificateTrustValidator : NSObject
- (long long)validateCertificateTrustWithChallenge:type:;
- (BOOL)_checkPinningPolicy:type:;
- (id)_policyForType:host:;
- (BOOL)_trySSLPinning:;
@end
