@interface SAWeatherLocationSnippet : SAUISnippet
@property (nonatomic) NSArray weatherLocations;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)weatherLocations;
- (void)setWeatherLocations:;
+ (id)locationSnippet;
+ (id)locationSnippetWithDictionary:context:;
@end
