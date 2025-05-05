@interface TIWordTokenizer : NSObject
- (id)init;
- (id)advanceToNextToken;
- (void).cxx_destruct;
- (id)allTokensForString:;
- (void)setString:withSearchRange:;
- (id)rangeOfCurrentToken;
@end
