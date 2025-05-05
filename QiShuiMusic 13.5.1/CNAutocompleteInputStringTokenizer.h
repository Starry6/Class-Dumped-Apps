@interface CNAutocompleteInputStringTokenizer : NSObject
@property (nonatomic) CNFuture nameStringTokenizer;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLocale:;
- (id)tokensFromString:;
- (id)expandCJKNames;
- (id)nameStringTokenizer;
- (void)setNameStringTokenizer:;
+ (id)tokensFromString:;
+ (id)lazyNameStringTokenizerWithLocale:;
@end
