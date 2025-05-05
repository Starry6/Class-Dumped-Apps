@interface SAMovieReviewsSnippet : SAUISnippet
@property (nonatomic) SAMovieMovie movie;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setMovie:;
- (id)movie;
+ (id)reviewsSnippet;
+ (id)reviewsSnippetWithDictionary:context:;
@end
