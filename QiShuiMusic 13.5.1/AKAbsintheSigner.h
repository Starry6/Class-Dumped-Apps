@interface AKAbsintheSigner : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)signatureForURLRequest:;
- (void)signatureForURLRequest:completionHandler:;
- (void)_generateSignatureForRequest:completionHandler:;
- (void)_createSigningContextWithCompletionHandler:;
- (id)_sessionInfoFromCertificateData:;
- (void)_establishSessionWithInfo:sessionURL:completionHandler:;
- (void)_destroySigningContext;
- (BOOL)_didSigningContextExpire;
+ (id)sharedSigner;
@end
