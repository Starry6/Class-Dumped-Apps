@interface SAMovieV2TheaterShowtimeListCell : SADomainObject
@property (nonatomic) BOOL bookable;
@property (nonatomic) SADistance relativeDistance;
@property (nonatomic) SAMovieV2ShowtimeSnippet showtimeSnippet;
@property (nonatomic) NSString theaterName;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)bookable;
- (void)setBookable:;
- (id)relativeDistance;
- (void)setRelativeDistance:;
- (id)showtimeSnippet;
- (void)setShowtimeSnippet:;
- (id)theaterName;
- (void)setTheaterName:;
+ (id)theaterShowtimeListCell;
+ (id)theaterShowtimeListCellWithDictionary:context:;
@end
