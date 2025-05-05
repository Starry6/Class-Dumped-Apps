@interface FMDDeviceIdentityFactory : NSObject
- (void)identityForPasscodeActivationUnlockWithContext:completion:;
- (void)baaIdentityAttestationForSigningRequest:completion:;
@end
