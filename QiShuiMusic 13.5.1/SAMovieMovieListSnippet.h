@interface SAMovieMovieListSnippet : SAUISnippet
@property (nonatomic) NSArray movies;
@property (nonatomic) BOOL shouldShowRottenTomatoesRating;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)movies;
- (void)setMovies:;
- (BOOL)shouldShowRottenTomatoesRating;
- (void)setShouldShowRottenTomatoesRating:;
+ (id)movieListSnippet;
+ (id)movieListSnippetWithDictionary:context:;
@end
