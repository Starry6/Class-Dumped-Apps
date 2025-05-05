@interface JPSignatureVerifier : NSObject
@property (nonatomic) ^{JetPackSignatureVerifier=} backing;
@property (nonatomic) BOOL releaseBackingOnDealloc;
- (void)dealloc;
- (id)backing;
- (BOOL)releaseBackingOnDealloc;
- (id)initWithBacking:releaseOnDealloc:;
- (void)setBacking:;
+ (id)unsafeIgnoreSignatureVerifier;
+ (id)defaultSignatureVerifier;
+ (id)signatureVerifierWithCertificate:;
@end
