@interface IDSMPFullDeviceIdentity : IDSMPIdentity
- (BOOL)purgeFromKeychain:;
- (id)dataRepresentationWithError:;
- (id)publicDeviceIdentityWithError:;
+ (id)deviceIdentityFromDataRepresentation:publicAdminServiceIdentity:error:;
+ (id)deviceIdentityWithFullAdminServiceIdentity:error:;
@end
