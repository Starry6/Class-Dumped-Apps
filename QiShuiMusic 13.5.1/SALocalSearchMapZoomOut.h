@interface SALocalSearchMapZoomOut : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)mapZoomOut;
+ (id)mapZoomOutWithDictionary:context:;
@end
