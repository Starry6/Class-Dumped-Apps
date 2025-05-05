@interface SAMovieV2MovieContextObject : SADomainObject
@property (nonatomic) NSString movieName;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)movieName;
- (void)setMovieName:;
+ (id)movieContextObject;
+ (id)movieContextObjectWithDictionary:context:;
@end
