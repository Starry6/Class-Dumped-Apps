@interface CNKeyboardSettings : NSObject
+ (id)newKeyboardSettingsForProperty:;
+ (long long)keyboardTypeFromDictionary:;
+ (long long)autocorrectionTypeFromDictionary:;
+ (long long)autocapitalizationTypeFromDictionary:;
+ (BOOL)contentsIsSingleValue:;
+ (BOOL)usesTextSuggestionDelegate:;
@end
