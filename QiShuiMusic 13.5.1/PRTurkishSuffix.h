@interface PRTurkishSuffix : NSObject
- (void)dealloc;
- (id)pattern;
- (id)description;
- (id)name;
- (void)_fillPatternBuffer;
- (id)initWithPattern:name:type:postponesApostrophe:;
- (int)suffixType;
- (BOOL)postponesApostrophe;
- (unsigned long long)matchingIndexInBuffer:length:followedByLetter:matchWithNameOnly:;
+ (id)standardTurkishNounSuffixes;
+ (id)standardTurkishVerbSuffixes;
+ (id)standardTurkishSuffixes;
+ (void)_enumerateSuffixMatchesForBuffer:length:followedByLetter:options:depth:matchState:suffixStack:suffixRangeStack:usingBlock:;
+ (void)enumerateSuffixMatchesForBuffer:length:options:usingBlock:;
+ (void)enumerateSuffixMatchesForWord:options:usingBlock:;
@end
