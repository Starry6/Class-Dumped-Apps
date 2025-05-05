@interface AMSAttestation : NSObject
+ (id)attestationWithOptions:error:;
+ (id)attestationHTTPBodyDataWithStyle:regenerateKeys:error:;
+ (BOOL)clearAttestationWithAccount:options:error:;
+ (id)_attestationPListWithStyle:primaryAttestation:extendedAttestation:error:;
+ (id)_generateCertificateChainStringsForOptions:error:;
@end
