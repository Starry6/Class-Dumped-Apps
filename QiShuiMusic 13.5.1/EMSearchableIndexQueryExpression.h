@interface EMSearchableIndexQueryExpression : NSObject
@property (nonatomic) NSString queryString;
@property (nonatomic) NSString searchString;
@property (nonatomic) CSSuggestion updatedSuggestion;
@property (nonatomic) BOOL valid;
- (void)setSearchString:;
- (id)init;
- (id)searchString;
- (id)updatedSuggestion;
- (BOOL)isValid;
- (void)setQueryString:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithQueryString:searchString:updatedSuggestion:;
- (id)copyWithZone:;
- (id)queryString;
+ (id)expressionWithQueryString:searchString:updatedSuggestion:;
+ (id)expressionWithQueryString:;
@end
