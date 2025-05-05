@interface SAMovieV2MovieListCell : SADomainObject
@property (nonatomic) NSArray displayableShowtimes;
@property (nonatomic) SAMovieV2MovieDetailSnippet movieDetailSnippet;
@property (nonatomic) NSString movieName;
@property (nonatomic) NSArray posterImages;
@property (nonatomic) NSNumber qualityRating;
@property (nonatomic) NSString rating;
@property (nonatomic) NSDate theatricalReleaseDate;
- (id)rating;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setRating:;
- (id)movieName;
- (void)setMovieName:;
- (id)displayableShowtimes;
- (void)setDisplayableShowtimes:;
- (id)movieDetailSnippet;
- (void)setMovieDetailSnippet:;
- (id)posterImages;
- (void)setPosterImages:;
- (id)qualityRating;
- (void)setQualityRating:;
- (id)theatricalReleaseDate;
- (void)setTheatricalReleaseDate:;
+ (id)movieListCell;
+ (id)movieListCellWithDictionary:context:;
@end
