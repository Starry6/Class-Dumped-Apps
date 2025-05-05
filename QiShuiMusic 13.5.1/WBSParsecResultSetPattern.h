@interface WBSParsecResultSetPattern : NSObject
- (void).cxx_destruct;
- (id)_initWithRegularExpression:;
- (BOOL)isMatchedByString:;
+ (id)_nextTokenInResultSetPattern:;
+ (id)_regularExpressionPatternForToken:;
+ (id)_regularExpressionPatternFromResultSetPattern:;
+ (id)_regularExpressionPatternForResultSetPatternSuffix:;
+ (id)patternWithString:;
@end
