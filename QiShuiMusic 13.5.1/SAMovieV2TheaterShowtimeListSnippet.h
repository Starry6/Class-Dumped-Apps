@interface SAMovieV2TheaterShowtimeListSnippet : SAUISnippet
@property (nonatomic) SAMovieV2MovieDetailSnippet movieDetailSnippet;
@property (nonatomic) NSArray theaterShowtimeListCells;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)movieDetailSnippet;
- (void)setMovieDetailSnippet:;
- (id)theaterShowtimeListCells;
- (void)setTheaterShowtimeListCells:;
+ (id)theaterShowtimeListSnippet;
+ (id)theaterShowtimeListSnippetWithDictionary:context:;
@end
