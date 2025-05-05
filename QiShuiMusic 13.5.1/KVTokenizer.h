@interface KVTokenizer : NSObject
@property (nonatomic) {shared_ptr<skitbridge::Tokenizer>=^{Tokenizer}^{__shared_weak_count}} tokenizer;
- (id)init;
- (id)locale;
- (id)tokenizer;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithLocale:;
- (id)queryFromText:;
- (id)initWithLocale:assetPath:normalizeWords:;
- (void)enumerateTokensOfText:usingBlock:;
@end
