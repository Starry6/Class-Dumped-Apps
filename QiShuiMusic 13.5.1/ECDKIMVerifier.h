@interface ECDKIMVerifier : NSObject
- (id)verificationContextForMessageData:error:;
- (BOOL)verifyMessageWithContext:options:error:;
- (BOOL)verifyMessageData:;
- (BOOL)verifyMessageData:publicKeySource:options:;
- (BOOL)verifyMessageWithContext:publicKeySource:options:error:;
- (BOOL)verifyMessageBodyData:withContext:usingSignature:;
- (id)_base64HashBodyData:usingSignature:;
- (BOOL)verifyMessageHeaders:usingSignature:publicKeySource:error:;
- (void)canonicalizeBodyDataUsingSimpleAlgorithm:;
- (void)canonicalizeBodyDataUsingRelaxedAlgorithm:;
- (id)canonicalizeHeaders:usingSimpleAlgorithmWithSignatureHeader:;
- (id)canonicalizeHeaders:usingRelaxedAlgorithmWithSignatureHeader:;
- (id)_relaxedCanonicalizationForHeaderName:headerBody:;
@end
