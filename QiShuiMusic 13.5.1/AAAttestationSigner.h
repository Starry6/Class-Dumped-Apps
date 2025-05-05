@interface AAAttestationSigner : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)signatureForData:options:completion:;
- (id)_signatureForData:withReferenceKey:error:;
- (id)_attestationWithCertificates:error:;
- (void)signaturesForDatas:options:completion:;
+ (id)sharedSigner;
@end
