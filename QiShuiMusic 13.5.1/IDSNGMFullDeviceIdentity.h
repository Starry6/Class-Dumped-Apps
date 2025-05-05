@interface IDSNGMFullDeviceIdentity : NSObject
- (BOOL)shouldRollEncryptionIdentity;
- (id)keyRollingTicketWithError:;
- (id)unsealMessage:signedByPublicIdentity:error:;
- (void)unsealMessage:signedByPublicIdentity:decryptionBlock:;
- (void)unsealMessageAndAttributes:signedByPublicIdentity:decryptionBlock:;
- (BOOL)updateWithRegisteredTicket:error:;
- (id)dataRepresentationWithError:;
- (id)publicDeviceIdentityWithError:;
- (id)batchSign:forType:error:;
- (id)sign:forType:error:;
- (BOOL)eraseFromKeyChain:;
+ (id)identityWithAccess:usageIdentifier:error:;
+ (id)identityWithDataRepresentation:error:;
@end
