@interface AXMLocSupport : NSObject
@property (nonatomic) NSLocale en_USLocale;
- (void).cxx_destruct;
- (id)en_USLocale;
- (id)localeForLanguageCode:;
- (id)baseLanguageForLocale:;
- (BOOL)localeBaseLanguageIsEnglish:;
- (id)localeMatchingBaseLanguageOfLocale:fromLocales:;
- (void)setEn_USLocale:;
+ (id)sharedInstance;
@end
