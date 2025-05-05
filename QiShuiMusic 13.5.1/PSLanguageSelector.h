@interface PSLanguageSelector : NSObject
- (id)preferredLanguages;
- (id)systemLanguages;
- (void)setLanguage:fallback:;
- (id)deviceLanguageIdentifier;
@end
