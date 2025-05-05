@interface WBSPasswordOrderedSetWordList : WBSPasswordWordList
@property (nonatomic) BOOL sensitive;
- (void).cxx_destruct;
- (BOOL)isSensitive;
- (void)enumerateEntriesForString:withBlock:;
- (id)initWithIdentifier:isSensitive:orderedWords:;
- (id)initWithIdentifier:isSensitive:orderedWordsArray:;
@end
