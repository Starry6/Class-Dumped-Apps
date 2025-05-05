@interface NSPersonNameComponentsFormatterPreferences : NSObject
+ (void)setShortNameFormat:;
+ (void)setDefaultDisplayNameOrder:;
+ (void)setPreferNicknamesDefault:;
+ (void)setShortNameIsEnabled:;
+ (void)_setPreference:toValue:usingExistingGetter:;
+ (void)_postPreferencesChangedNotification;
+ (void)_syncronizeGizmoDefaultWithKey:value:;
+ (id)mappedPreferencesForPreferences:from:to:;
+ (id)infoClassFromPreferencesSource:;
@end
