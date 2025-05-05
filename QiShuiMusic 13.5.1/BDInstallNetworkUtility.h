@interface BDInstallNetworkUtility : NSObject
+ (id)buildQueryFromDictionary:;
+ (id)carrierParameter;
+ (id)carrierParameterWithIPV6;
+ (id)carrierParameterWithSystem;
+ (id)carrierParameterWithSystemNew;
+ (id)carrierParameterWithSystemOld;
+ (long long)carrierTypeWithIPV6;
+ (void)clearOnTheFlyParameter;
+ (id)commonURLParameters;
+ (id)decodeBase64String:;
+ (BOOL)isJailBroken;
+ (BOOL)isUpgradeUser;
+ (id)onTheFlyParameter;
+ (id)resolutionString;
+ (id)versionName;
+ (id)bundleIdentifier;
+ (id)channel;
+ (id)platform;
+ (unsigned long long)sdkVersion;
+ (id)appDisplayName;
@end
