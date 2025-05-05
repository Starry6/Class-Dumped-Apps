@interface SBSBiometricsService : SBSAbstractSystemService
- (void)fetchUnlockCredentialSetWithCompletion:;
- (void)acquireUnlockSuppressionAssertionForReason:completion:;
- (void)acquireWalletPreArmSuppressionAssertionForReason:completion:;
- (void)_acquireBiometricAssertionOfType:assertionName:reason:completion:;
@end
