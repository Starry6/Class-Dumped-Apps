@interface PSLocaleSelector : NSObject
- (id)currentLocale;
- (id)availableLocaleIdentifiers;
- (void)setLocaleFromLanguageIdentifier:;
- (void)setLocaleFromRegionCode:;
@end
