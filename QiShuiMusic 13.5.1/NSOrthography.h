@interface NSOrthography : NSObject
@property (nonatomic) NSString dominantScript;
@property (nonatomic) NSDictionary languageMap;
- (id)replacementObjectForPortCoder:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (Class)classForCoder;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithDominantScript:languageMap:;
- (id)dominantScript;
- (id)languageMap;
- (unsigned int)orthographyFlags;
- (id)languagesForScript:;
- (id)dominantLanguageForScript:;
- (id)dominantLanguage;
- (id)allScripts;
- (id)allLanguages;
+ (id)allocWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)orthographyWithDominantScript:languageMap:;
+ (id)_scriptNameForScriptIndex:;
+ (id)_orthographyWithDominantScript:languageMap:;
+ (id)defaultOrthographyForLanguage:;
@end
