@interface IESIMLanguageManager : NSObject
@property (nonatomic) Q languageStyle;
@property (nonatomic) q staticVersionNumber;
- (id)currentLanguageModel;
- (void)initializeLanguageWithStyle:andFlipImageNames:;
- (void)initializeLanguageWithStyle:autoLocalize:andFlipImageNames:;
- (BOOL)isChinese;
- (BOOL)isCurrentLanguage:;
- (unsigned long long)languageStyle;
- (void)setLanguageStyle:;
- (long long)staticVersionNumber;
- (void)updateExpectLanguageModel:;
- (id)currentLocale;
- (id)supportedLanguages;
- (id)currentLanguage;
+ (id)sharedInstance;
@end
