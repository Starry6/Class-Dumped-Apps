@interface MCAppEnforcedRestrictionUtilities : NSObject
+ (id)clientUUIDForBundleID:;
+ (id)currentCountryCodes;
+ (id)appUnavailableInRegionRestrictionForBundleID:;
+ (id)enforcedRestrictionsForBundleID:restrictionPlistURL:countryCodes:;
@end
