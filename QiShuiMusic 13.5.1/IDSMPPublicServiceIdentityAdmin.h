@interface IDSMPPublicServiceIdentityAdmin : IDSMPIdentity
- (id)dataRepresentationWithError:;
+ (id)publicServiceIdentitySigningWithDataRepresentation:publicAccountIdentity:error:;
+ (id)publicServiceIdentityAdminWithDataRepresentation:publicAccountIdentity:error:;
@end
