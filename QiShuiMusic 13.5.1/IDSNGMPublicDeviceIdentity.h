@interface IDSNGMPublicDeviceIdentity : NSObject
- (id)identityData;
- (id)sealMessage:withEncryptedAttributes:signedByFullIdentity:error:;
- (id)prekeyData;
- (BOOL)isValidSignature:forMessage:forType:error:;
- (id)dataRepresentationWithError:;
- (id)sealMessage:signedByFullIdentity:error:;
+ (id)identityWithDataRepresentation:error:;
+ (id)identityWithIdentityData:prekeyData:error:;
@end
