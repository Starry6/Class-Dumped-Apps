@interface PSLanguage : NSObject
@property (nonatomic) NSString languageCode;
@property (nonatomic) NSString languageName;
@property (nonatomic) NSString localizedLanguageName;
- (void)setLanguageCode:;
- (id)languageCode;
- (void).cxx_destruct;
- (id)localizedLanguageName;
- (BOOL)displayNamesAreEqual;
- (id)languageName;
- (void)setLanguageName:;
- (void)setLocalizedLanguageName:;
+ (id)languageWithCode:name:localizedName:;
@end
