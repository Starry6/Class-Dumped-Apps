@interface LSAltIconManager : NSObject
- (id)init;
- (void)_setPreferredIconName:forIdentifier:;
- (void)clearAlternateNameForBundleIdentifier:validationDictionary:;
- (BOOL)_setAlternateIconName:forIdentifier:withIconsDictionary:error:;
- (BOOL)isValidAlternateIcon:forIconsDict:;
- (void)setAlternateIconName:forIdentifier:iconsDictionary:reply:;
- (id)alternateIconNameForIdentifier:error:;
- (id)_getPreferredIconNameForIdentifier:;
+ (id)sharedInstance;
@end
