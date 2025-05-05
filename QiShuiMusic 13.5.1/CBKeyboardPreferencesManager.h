@interface CBKeyboardPreferencesManager : NSObject
- (id)init;
- (void)dealloc;
- (BOOL)setPreference:forKey:;
- (id)copyPreferenceForKey:;
- (id)copyAllPrefereneces;
+ (id)sharedInstance;
+ (BOOL)setIntPreference:forKey:;
+ (BOOL)setFloatPreference:forKey:;
+ (BOOL)setBoolPreference:forKey:;
+ (BOOL)setPreference:forKey:;
+ (BOOL)getIntPreference:forKey:;
+ (BOOL)getFloatPreference:forKey:;
+ (BOOL)getBoolPreference:forKey:;
+ (id)copyPreferenceForKey:;
+ (id)copyPreferenceForKey:keyboardID:;
+ (id)copyAllPreferences;
@end
