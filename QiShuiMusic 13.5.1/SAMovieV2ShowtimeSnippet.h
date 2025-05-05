@interface SAMovieV2ShowtimeSnippet : SAUISnippet
@property (nonatomic) SAUIImageResource attributionLogo;
@property (nonatomic) NSString movieName;
@property (nonatomic) NSArray showtimes;
@property (nonatomic) SALocalSearchBusiness2 theater;
@property (nonatomic) NSString theaterName;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)movieName;
- (void)setMovieName:;
- (id)showtimes;
- (void)setShowtimes:;
- (id)theater;
- (void)setTheater:;
- (id)theaterName;
- (void)setTheaterName:;
- (id)attributionLogo;
- (void)setAttributionLogo:;
+ (id)showtimeSnippet;
+ (id)showtimeSnippetWithDictionary:context:;
@end
