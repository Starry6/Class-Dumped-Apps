@interface PRLexiconCursor : NSObject
- (void)dealloc;
- (void)enumerateEntriesUsingBlock:;
- (BOOL)isValid;
- (BOOL)hasEntries;
- (BOOL)hasChildren;
- (double)prefixProbability;
- (double)terminationProbability;
- (id)initWithLexicon:;
- (void)_advance:;
- (void)advanceWithCombinedCharacterSequence:;
- (void)advanceWithString:;
- (void)_enumerateCompletions:usingBlock:;
- (void)enumerateCompletions:usingBlock:;
- (void)enumerateCompletionEntries:usingBlock:;
@end
