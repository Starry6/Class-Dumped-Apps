@interface WBSPasswordLexiconWordList : WBSPasswordWordList
- (void)dealloc;
- (void)enumerateEntriesForString:withBlock:;
- (id)initWithIdentifier:lexicon:;
+ (id)lexiconWordListWithIdentifier:localeIdentifier:;
@end
