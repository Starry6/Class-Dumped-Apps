@interface IDSMPPublicDeviceIdentity : IDSMPIdentity
- (id)dataRepresentationWithError:;
+ (id)deviceIdentityFromDataRepresentation:publicAdminServiceIdentity:error:;
+ (id)deviceIdentityFromDataRepresentation:error:;
@end
