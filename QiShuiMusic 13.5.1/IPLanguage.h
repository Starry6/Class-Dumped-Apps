@interface IPLanguage : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString name;
@property (nonatomic) NSString localizedStringForName;
@property (nonatomic) IPLanguage minimizedLanguage;
- (void)setName:;
- (id)identifier;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)minimizedLanguage;
- (id)localizedStringForName;
- (void)setLocalizedStringForName:;
+ (id)languageWithIdentifier:;
+ (id)languageWithIdentifier:normalize:;
+ (id)IPLanguagesWithLanguages:normalize:;
@end
