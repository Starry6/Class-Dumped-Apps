@interface CKPATKeyBlinding : NSObject
+ (id)privateScalarFromSecKey:;
+ (id)secKeyFromCompressedRepresentation:;
+ (id)compressedRepresentationFromSecKey:;
+ (BOOL)isValidSignature:forMessage:signedBy:;
+ (id)blindSignMessage:blindedBy:withKey:error:;
+ (id)blindPublicKey:withPrivateKey:error:;
+ (id)unblindPublicKey:withPrivateKey:error:;
@end
