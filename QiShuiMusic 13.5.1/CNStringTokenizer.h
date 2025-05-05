@interface CNStringTokenizer : NSObject
@property (nonatomic) ^{__CFStringTokenizer=} tokenizer;
@property (nonatomic) CNUnfairLock lock;
- (id)init;
- (void)dealloc;
- (id)lock;
- (id)tokenizer;
- (void).cxx_destruct;
- (id)initWithLocale:;
- (id)tokenizeString:;
- (id)rangesOfWordTokensInString:;
- (id)rangesOfWordUnitTokensInString:;
+ (id)tokenizeString:;
+ (id)adjustRanges:toIncludeNonBreakingCharactersInString:;
+ (BOOL)isCharacterNonBreaking:;
@end
