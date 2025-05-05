@interface BYLicenseAgreement : NSObject
+ (BOOL)needsToAcceptNewAgreement;
+ (void)_clearAcceptedLicenseVersion;
+ (void)recordUserAcceptedAgreementVersion:;
+ (unsigned long long)versionOfAcceptedAgreement;
+ (unsigned long long)versionOfOnDiskAgreement;
@end
