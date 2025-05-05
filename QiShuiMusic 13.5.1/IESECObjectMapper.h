@interface IESECObjectMapper : NSObject
- (id)mappedObjectWithTargetClass:forObject:;
- (void)registerMapper:withTargetClass:forClass:;
- (void)removeAllMappedObjects;
- (void)removeMappedObjectForObject:;
- (id)init;
- (void).cxx_destruct;
@end
