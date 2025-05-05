@interface IESIMLocalizationsConfig : NSObject
@property (nonatomic) IESIMLanguageModel developmentLanguage;
@property (nonatomic) NSString defaultLocale;
@property (nonatomic) NSString languagePackageInitialPath;
@property (nonatomic) q languagePackageInitialVersion;
@property (nonatomic) NSString extensionAppGroupIdentifier;
@property (nonatomic) BOOL autoLocalize;
@property (nonatomic) @? languageFilterBlock;
- (void)setExtensionAppGroupIdentifier:;
- (BOOL)autoLocalize;
- (id)defaultLocale;
- (id)developmentLanguage;
- (id)extensionAppGroupIdentifier;
- (id)languageFilterBlock;
- (id)languagePackageInitialPath;
- (long long)languagePackageInitialVersion;
- (void)setAutoLocalize:;
- (void)setDefaultLocale:;
- (void)setDevelopmentLanguage:;
- (void)setLanguageFilterBlock:;
- (void)setLanguagePackageInitialPath:;
- (void)setLanguagePackageInitialVersion:;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
