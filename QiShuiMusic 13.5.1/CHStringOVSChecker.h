@interface CHStringOVSChecker : NSObject
- (void)dealloc;
- (id)initWithTrie:staticLexicon:customLexicon:flags:stringNormalizationFunction:;
- (BOOL)isInappropriateLexiconEntry:;
- (BOOL)_isInappropriateString:withLexicon:;
- (BOOL)_isInappropriateString:withTrie:;
- (BOOL)isInappropriateString:;
- (BOOL)isInappropriateTokenID:;
- (BOOL)_isInappropriateTokenID:withLexicon:;
+ (id)obfuscateString:;
@end
