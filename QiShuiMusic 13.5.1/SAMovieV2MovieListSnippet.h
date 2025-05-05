@interface SAMovieV2MovieListSnippet : SAUISnippet
@property (nonatomic) NSArray movieListCells;
@property (nonatomic) SALocalSearchBusiness2 theater;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)theater;
- (void)setTheater:;
- (id)movieListCells;
- (void)setMovieListCells:;
+ (id)movieListSnippet;
+ (id)movieListSnippetWithDictionary:context:;
@end
