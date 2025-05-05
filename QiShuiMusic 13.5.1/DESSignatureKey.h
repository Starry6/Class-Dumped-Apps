@interface DESSignatureKey : NSObject
- (id)init;
- (void)dealloc;
- (BOOL)validateBase64Signature:data:;
- (id)initWithKey:;
- (BOOL)validateBase64Signature:data:algorithm:;
- (BOOL)validateSignature:data:algorithm:;
+ (id)keyFromData:;
+ (id)keyFromCertificateChain:;
@end
