@interface IDSMPPublicServiceIdentitySigning : IDSMPIdentity
- (id)dataRepresentationWithError:;
+ (id)publicServiceIdentitySigningWithDataRepresentation:publicAccountIdentity:error:;
@end
