@interface CryptoKitPrivate.TDMClient : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithTID:;
- (id)blindedElement;
- (id)finalizeWithFSR:evaluatedElement:proof:publicKey:error:;
@end
