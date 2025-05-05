@interface NLLexiconCursor : NSObject
@property (nonatomic) BOOL hasEntries;
@property (nonatomic) BOOL hasChildren;
@property (nonatomic) double prefixProbability;
@property (nonatomic) double terminationProbability;
@property (nonatomic) NSString traversedString;
- (void)dealloc;
- (void)enumerateEntriesUsingBlock:;
- (void).cxx_destruct;
- (id)initWithLexicon:cursor:;
- (id)initWithLexicon:string:;
- (id)cursorByAdvancingWithString:;
- (BOOL)hasEntries;
- (BOOL)hasChildren;
- (double)prefixProbability;
- (double)terminationProbability;
- (id)traversedString;
- (void)enumerateChildrenUsingBlock:;
- (void)_enumerateEntriesUsingBlock:;
- (void)enumerateCompletionsUsingBlock:;
@end
