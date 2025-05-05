@interface SAMovieV2TheaterListCell : SADomainObject
@property (nonatomic) SADistance relativeDistance;
@property (nonatomic) NSString theaterAddress;
@property (nonatomic) NSString theaterName;
@property (nonatomic) SAMovieV2MovieListSnippet theaterShowtimeListSnippet;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)theaterShowtimeListSnippet;
- (id)relativeDistance;
- (void)setRelativeDistance:;
- (id)theaterName;
- (void)setTheaterName:;
- (id)theaterAddress;
- (void)setTheaterAddress:;
- (void)setTheaterShowtimeListSnippet:;
+ (id)theaterListCell;
+ (id)theaterListCellWithDictionary:context:;
@end
