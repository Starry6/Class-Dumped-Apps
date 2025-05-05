@interface IPLanguageListManager : NSObject
@property (nonatomic) NSArray preferredLanguages;
@property (nonatomic) NSLocale preferredLocale;
@property (nonatomic) NSArray systemLanguages;
@property (nonatomic) NSString systemDisplayLanguage;
- (void)setPreferredLanguages:;
- (id)preferredLanguages;
- (void).cxx_destruct;
- (id)systemLanguages;
- (id)preferredLocale;
- (id)initWithPreferredLanguages:preferredLocale:systemLanguages:;
- (id)initWithPreferredLanguages:preferredLocale:;
- (id)initWithPreferredLanguages:;
- (id)deviceLanguagesForChangingDeviceLanguage:;
- (id)languageVariants;
- (id)otherLanguages;
- (void)setRegion:updateFirstLanguage:;
- (id)systemDisplayLanguage;
- (void)setPreferredLocale:;
+ (id)generator;
+ (void)preheat;
+ (id)manager;
+ (id)regionalVariantLanguagesForBaseLanguage:;
+ (id)regionalVariantLanguagesForSystemLanguages;
+ (void)sortByLocalizedLanguage:;
+ (id)effectiveSystemLanguagesWithUnsupportedVariant:forPreferredLanguages:;
+ (BOOL)canRemoveLanguages:fromPreferredLanguages:;
@end
