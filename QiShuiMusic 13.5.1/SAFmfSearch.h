@interface SAFmfSearch : SADomainCommand
@property (nonatomic) SALocation currentLocation;
@property (nonatomic) NSArray friends;
@property (nonatomic) NSString proximity;
@property (nonatomic) SALocation requestedLocation;
- (id)friends;
- (void)setCurrentLocation:;
- (id)groupIdentifier;
- (id)proximity;
- (id)currentLocation;
- (BOOL)requiresResponse;
- (void)setFriends:;
- (id)encodedClassName;
- (void)setProximity:;
- (id)requestedLocation;
- (void)setRequestedLocation:;
+ (id)search;
+ (id)searchWithDictionary:context:;
@end
