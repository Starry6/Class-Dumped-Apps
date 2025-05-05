@interface SecJWSEncoder : NSObject
@property (nonatomic) ^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v} publicKey;
@property (nonatomic) ^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v} privateKey;
- (id)privateKey;
- (id)init;
- (void)dealloc;
- (id)publicKey;
- (void)setPublicKey:;
- (void)setPrivateKey:;
- (id)initWithPublicKey:privateKey:;
- (id)createKeyPair;
- (id)jwkPublicKey;
- (id)signatureWithProtectedHeader:payload:;
- (id)encodedJWSWithPayload:kid:nonce:url:error:;
- (id)base64URLEncodedStringRepresentationWithData:;
- (id)base64URLEncodedStringRepresentationWithDictionary:;
- (id)compactJSONStringRepresentationWithDictionary:;
@end
