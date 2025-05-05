@interface TKApplicationProxy : NSObject
- (id)displayNameForBundleID:;
- (id)_coreServicesLocalizedNameForBundleID:;
+ (id)_displayNamesCache;
@end
