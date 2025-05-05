@interface CPLResourceTypeSet : NSObject
@property (nonatomic) BOOL empty;
@property (nonatomic) Q count;
- (BOOL)isEmpty;
- (id)unionSet:;
- (id)redactedDescription;
- (id)description;
- (unsigned long long)count;
- (BOOL)isEqual:;
- (void)enumerateResourceTypesWithBlock:;
- (void)addResourceType:;
- (void)removeResourceType:;
- (BOOL)containsResourceType:;
- (id)intersectionWithSet:;
- (BOOL)intersectsWithSet:;
@end
