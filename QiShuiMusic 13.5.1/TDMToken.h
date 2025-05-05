@interface TDMToken : NSObject
@property (nonatomic) _TtC16CryptoKitPrivate9TDMClient tdmClient;
- (void).cxx_destruct;
- (id)initWithTID:;
- (id)blindedElement;
- (id)finalizeWithEvaluatedElement:proof:publicKey:fsr:error:;
- (id)tdmClient;
@end
