@interface SALocalSearchMapZoomIn : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)mapZoomIn;
+ (id)mapZoomInWithDictionary:context:;
@end
