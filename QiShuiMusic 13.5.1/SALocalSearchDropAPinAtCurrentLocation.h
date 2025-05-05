@interface SALocalSearchDropAPinAtCurrentLocation : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)dropAPinAtCurrentLocation;
+ (id)dropAPinAtCurrentLocationWithDictionary:context:;
@end
