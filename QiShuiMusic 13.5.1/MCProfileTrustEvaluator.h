@interface MCProfileTrustEvaluator : NSObject
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToWriteDefaults:;
- (BOOL)_verifyCerts:policy:;
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallUnsupportedPayload:;
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallSupervisedRestrictionsOnUnsupervisedDevices:;
@end
