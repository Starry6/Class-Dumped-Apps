@interface CryptoKitPrivate.CKPIETFKeyBlinding : NSObject
- (id)init;
- (void).cxx_destruct;
+ (id)privateScalarFromSecKey:;
+ (id)secKeyFromCompressedRepresentation:;
+ (id)compressedRepresentationFromSecKey:;
+ (BOOL)isValidWithSignature:for:with:;
+ (id)blindSign:blindedBy:with:error:;
+ (id)blindPublicKeyWithPublicKey:with:error:;
+ (id)unblindPublicKey:with:error:;
@end
