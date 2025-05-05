@interface SAMovieV2MovieTheater : SADomainObject
@property (nonatomic) SALocalSearchBusiness2 business;
@property (nonatomic) NSArray movies;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)business;
- (void)setBusiness:;
- (id)movies;
- (void)setMovies:;
+ (id)movieTheater;
+ (id)movieTheaterWithDictionary:context:;
@end
