@interface DMCFeatureFlags : NSObject
+ (BOOL)isORGODeviceSubscriptionEnabled;
+ (BOOL)isORGOUserSubscriptionEnabled;
+ (BOOL)isUAORGOEnabled;
+ (BOOL)isDeviceManagementAndVPNUIEnabled;
+ (BOOL)isORGOEnabled;
+ (BOOL)isBYODAppleEnabled;
+ (BOOL)isSecondaryAccountListUIEnabled;
+ (BOOL)isBYODEnabled;
+ (BOOL)isBYOD3rdPartyEnabled;
+ (BOOL)hasT2;
+ (BOOL)isAppleInternal;
+ (BOOL)isUserEnrollmentShowsManagedAccountEnabled;
+ (BOOL)isRMDMEnabled;
+ (BOOL)isESSOTestEnabled;
+ (BOOL)isESSOEnabled;
+ (BOOL)isClassCIdentitiesEnabled;
+ (BOOL)isBYODSpyglassEnabled;
+ (BOOL)isHRNEnabled;
+ (BOOL)isManagedRestoreEnabled;
+ (BOOL)isUserChannelEnabled;
@end
