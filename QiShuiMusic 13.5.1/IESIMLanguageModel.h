@interface IESIMLanguageModel : NSObject
@property (nonatomic) NSString locale;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString localizedDisplayName;
@property (nonatomic) NSString languageCode;
@property (nonatomic) BOOL isRTLLanguage;
@property (nonatomic) BOOL isThailand;
@property (nonatomic) BOOL isLigatureLanguage;
- (id)initWithLocale:displayName:localizedDisplayName:;
- (BOOL)isLigatureLanguage;
- (BOOL)isThailand;
- (id)languageCode;
- (id)locale;
- (unsigned long long)hash;
- (void)setDisplayName:;
- (id)displayName;
- (void)setLocalizedDisplayName:;
- (id)localizedDisplayName;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (BOOL)isRTLLanguage;
+ (id)languageCodeFromLocale:;
@end
