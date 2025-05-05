@interface SAAceWatchFace : SADomainObject
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)aceWatchFace;
+ (id)aceWatchFaceWithDictionary:context:;
@end
