@interface SAABAddress : SALocation
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)address;
+ (id)addressWithDictionary:context:;
@end
