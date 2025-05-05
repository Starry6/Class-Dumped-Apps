@interface SAFmfLocationSnippet : SAUISnippet
@property (nonatomic) NSNumber atRequestedLocation;
@property (nonatomic) NSArray locations;
@property (nonatomic) NSString proximity;
@property (nonatomic) NSURL searchContext;
- (void)setLocations:;
- (void)setSearchContext:;
- (id)locations;
- (id)groupIdentifier;
- (id)proximity;
- (id)encodedClassName;
- (void)setProximity:;
- (id)searchContext;
- (id)atRequestedLocation;
- (void)setAtRequestedLocation:;
+ (id)locationSnippet;
+ (id)locationSnippetWithDictionary:context:;
@end
