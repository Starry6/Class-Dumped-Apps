@interface SecJWSDecoder : NSObject
@property (nonatomic) NSString keyID;
@property (nonatomic) NSData payload;
@property (nonatomic) NSError verificationError;
- (id)payload;
- (id)keyID;
- (void).cxx_destruct;
- (id)initWithJWSCompactEncodedString:keyID:publicKey:;
- (BOOL)_validateJWSProtectedHeader:;
- (void)_validateJWSSignature:ofHeader:andPayload:withPublicKey:;
- (id)_createASN1SignatureFromJWSSignature:;
- (id)dataWithBase64URLEncodedString:;
- (id)verificationError;
@end
