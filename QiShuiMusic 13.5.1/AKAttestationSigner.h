@interface AKAttestationSigner : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)signatureForData:options:completion:;
- (void)signaturesForData:options:completion:;
- (void)_baaSignaturesForData:completion:;
- (void)_baaSignatureForData:completion:;
- (id)_signatureForData:withReferenceKey:error:;
- (id)_attestationWithCertificates:error:;
+ (id)sharedSigner;
@end
