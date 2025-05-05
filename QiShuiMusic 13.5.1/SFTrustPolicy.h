@interface SFTrustPolicy : NSObject
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)evaluateCertificateChain:error:;
@end
