@interface EMFQuery : NSObject
@property (nonatomic) NSString queryString;
@property (nonatomic) NSString trimmedQueryString;
@property (nonatomic) NSString normalizedQueryString;
@property (nonatomic) NSArray tokens;
@property (nonatomic) NSLocale locale;
@property (nonatomic) EMFStringStemmer stringStemmer;
- (id)locale;
- (void)setTokens:;
- (void)setQueryString:;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithLocale:;
- (id)tokens;
- (id)copyWithZone:;
- (id)queryString;
- (id)initWithQueryString:andLocale:;
- (id)tokenCounts;
- (id)initWithQueryString:andQueryTokens:andLocale:;
- (id)initWithQueryTokens:andLocale:;
- (id)finalTokenAnalyzed;
- (id)finalTokenUnanalyzed;
- (id)trimmedQueryString;
- (id)normalizedQueryString;
- (id)_finalTokenAnalyzed:;
- (id)stringStemmer;
- (void)setStringStemmer:;
@end
