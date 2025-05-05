@interface NSSimpleOrthography : NSOrthography
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (Class)classForCoder;
- (id)initWithFlags:;
- (id)initWithDominantScript:languageMap:;
- (id)dominantScript;
- (id)languageMap;
- (unsigned int)orthographyFlags;
- (id)languagesForScript:;
- (id)dominantLanguageForScript:;
- (id)dominantLanguage;
- (id)allScripts;
- (id)allLanguages;
+ (BOOL)supportsSecureCoding;
+ (id)orthographyWithFlags:;
@end
