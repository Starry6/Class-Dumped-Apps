@interface CVNLPLexiconCursors : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (long long)count;
- (id).cxx_construct;
- (id)copyWithZone:;
- (id)initWithSortedCursors:;
- (void)enumerateLexiconCursorsSortedByPriorityWithBlock:;
@end
