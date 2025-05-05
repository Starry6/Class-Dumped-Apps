@interface SAMovieImage : AceObject
@property (nonatomic) SAMovieResolution resolution;
@property (nonatomic) NSURL uri;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)uri;
- (id)groupIdentifier;
- (void)setResolution:;
- (id)resolution;
- (id)encodedClassName;
- (void)setUri:;
+ (id)image;
+ (id)imageWithDictionary:context:;
@end
