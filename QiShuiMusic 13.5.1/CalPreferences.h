@interface CalPreferences : NSObject
- (id)initWithDomain:;
- (id)init;
- (void)dealloc;
- (void)_synchronizePreferences;
- (id)initWithDomain:store:readOnly:;
- (id)initWithDomain:readOnly:;
- (void)registerReflectionForPreferenceWithNotificationName:;
- (BOOL)getBooleanPreference:defaultValue:;
- (id)getValueForPreference:expectedClass:;
- (void)setBooleanPreference:value:notificationName:;
- (void)_preferenceChangedInternally:;
- (void)unregisterReflectionForPreferenceWithNotificationName:;
- (void)_preferenceChangedExternally:;
- (void).cxx_destruct;
- (void)removePreference:notificationName:;
- (id)initWithDomain:store:;
- (void)setValueForPreference:value:notificationName:;
- (long long)getIntegerPreference:defaultValue:;
- (void)setIntegerPreference:value:notificationName:;
+ (id)log;
@end
