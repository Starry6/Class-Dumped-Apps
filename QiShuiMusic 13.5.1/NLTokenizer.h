@interface NLTokenizer : NSObject
@property (nonatomic) q unit;
@property (nonatomic) NSString string;
- (id)string;
- (void)dealloc;
- (void)setLanguage:;
- (id)language;
- (void)setString:;
- (void).cxx_destruct;
- (long long)unit;
- (id)initWithUnit:;
- (void)enumerateTokensInRange:usingBlock:;
- (id)tokenRangeAtIndex:;
- (id)_wordCharacterSet;
- (id)_tokenAtIndex:;
- (id)tokenRangeForRange:;
- (id)tokensForRange:;
@end
