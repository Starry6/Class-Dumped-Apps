@interface BDInstallIDFAManager : NSObject
+ (void)checkNeedRegisterDeviceAgainWhenIdfaAuthorizationStatusDidChange;
+ (void)idfaAuthorizationStatusDidChange;
+ (void)syncIdfaAuthorizationStatusToTTNet;
+ (unsigned long long)authorizationStatus;
+ (id)trackingIdentifier;
+ (void)requestTrackingAuthorizationWithCompletionHandler:;
@end
