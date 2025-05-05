@interface CryptoKitPrivate.AlishaSPAKE2Prover : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithPassword:salt:authenticatedData:keyDerivationCost:;
- (id)getX;
- (id)processResponseWithY:M1:;
@end
