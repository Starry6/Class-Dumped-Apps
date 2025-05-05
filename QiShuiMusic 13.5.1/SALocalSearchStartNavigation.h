@interface SALocalSearchStartNavigation : SABaseClientBoundCommand
@property (nonatomic) SALocation destination;
@property (nonatomic) NSString directionsType;
@property (nonatomic) SALocation origin;
- (void)setDestination:;
- (void)setOrigin:;
- (id)groupIdentifier;
- (id)destination;
- (BOOL)requiresResponse;
- (id)origin;
- (id)encodedClassName;
- (id)directionsType;
- (void)setDirectionsType:;
+ (id)startNavigation;
+ (id)startNavigationWithDictionary:context:;
@end
