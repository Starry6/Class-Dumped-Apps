@interface CryptoKitPrivate.TDMServer : NSObject
- (id)init;
- (id)publicKey;
- (void).cxx_destruct;
- (id)info;
- (id)evaluateWithBlindedElement:error:;
- (BOOL)verifyTokenWithOutput:TID:FSR:;
@end
