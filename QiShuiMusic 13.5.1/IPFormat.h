@interface IPFormat : NSObject
+ (id)localeFromDeviceLanguage;
+ (id)numberFormatterFromLocale;
+ (id)numberFormatterFromLanguage;
+ (void)setNumberFormat:;
@end
