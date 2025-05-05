@interface BiometricPreferences : NSObject
+ (id)preferenceValueOfClass:forKey:;
+ (id)preferenceValueOfClass:forKey:defaultValue:;
+ (id)stateDictionary;
+ (void)setPreferenceValue:forKey:;
+ (BOOL)isPreferenceKeySet:;
@end
