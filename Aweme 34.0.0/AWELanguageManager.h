@interface AWELanguageManager : NSObject
@property (nonatomic) Q languageStyle;
@property (nonatomic) q staticVersionNumber;
- (BOOL)isChinese;
- (id)currentLanguageModel;
- (BOOL)isCurrentLanguage:;
- (unsigned long long)languageStyle;
- (void)initializeLanguageWithStyle:autoLocalize:andFlipImageNames:defaultLanguageName:;
- (void)initializeLanguageWithStyle:autoLocalize:andFlipImageNames:;
- (void)setLanguageStyle:;
- (long long)staticVersionNumber;
- (void)initializeLanguageWithStyle:andFlipImageNames:;
- (void)updateExpectLanguageModel:;
- (id)currentLocale;
- (id)supportedLanguages;
- (id)currentLanguage;
+ (id)sharedInstance;
@end
