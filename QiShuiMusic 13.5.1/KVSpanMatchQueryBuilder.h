@interface KVSpanMatchQueryBuilder : NSObject
- (id)init;
- (id)build;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithLocale:;
- (id)initWithLocale:cleanText:;
- (void)addTokenWithValue:cleanValue:normalizedValues:beginIndex:endIndex:isSignificant:isWitespace:;
+ (id)queryFromTokenChain:;
@end
