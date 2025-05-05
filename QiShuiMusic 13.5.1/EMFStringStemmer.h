@interface EMFStringStemmer : NSObject
@property (nonatomic) NSLocale locale;
@property (nonatomic) Q encoding;
- (void)dealloc;
- (unsigned long long)encoding;
- (id)locale;
- (void).cxx_destruct;
- (void)setEncoding:;
- (id)initWithLocale:;
- (id)stemToken:;
- (id)stemTokens:;
+ (unsigned char)supportsLocale:;
+ (id)supportedLanguageNames;
+ (id)stemmerLanguageNameForLocale:;
+ (id)_createSnowballStemmerForLocale:;
@end
