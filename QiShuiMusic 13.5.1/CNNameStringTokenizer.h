@interface CNNameStringTokenizer : NSObject
@property (nonatomic) ^{__CFStringTokenizer=} tokenizer;
@property (nonatomic) CNUnfairLock lock;
- (id)init;
- (void)dealloc;
- (id)lock;
- (id)tokenizer;
- (void).cxx_destruct;
- (id)initWithLocale:;
- (id)tokenizeNameString:inferredNameOrder:;
+ (id)tokenizeNameString:;
+ (id)tokenizeNameString:usingLocale:inferredNameOrder:;
+ (void)setInferredNameOrder:toTokenizerNameOrder:;
@end
