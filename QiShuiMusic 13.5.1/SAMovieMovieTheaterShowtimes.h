@interface SAMovieMovieTheaterShowtimes : AceObject
@property (nonatomic) NSArray movieShowtimes;
@property (nonatomic) NSArray showtimes;
@property (nonatomic) SALocalSearchBusiness2 theater;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)movieShowtimes;
- (void)setMovieShowtimes:;
- (id)showtimes;
- (void)setShowtimes:;
- (id)theater;
- (void)setTheater:;
+ (id)movieTheaterShowtimes;
+ (id)movieTheaterShowtimesWithDictionary:context:;
@end
