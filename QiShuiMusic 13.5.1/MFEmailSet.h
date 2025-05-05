@interface MFEmailSet : EAEmailAddressSet
- (void)intersectSet:;
- (id)init;
- (void)dealloc;
- (void)unionSet:;
- (id)serializedRepresentation;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (BOOL)isSubsetOfSet:;
- (void)addObject:;
- (void)removeAllObjects;
- (void)removeObject:;
- (BOOL)intersectsSet:;
- (void)minusSet:;
- (id)member:;
- (BOOL)isEqualToSet:;
- (id)initWithSet:;
- (id)objectEnumerator;
- (id)_generateAllObjectsFromSelector:;
- (id)mutableCopyWithZone:;
- (id)allObjects;
- (unsigned long long)count;
- (void)_setupSetWithCapacity:;
- (void)setSet:;
- (id)allCommentedAddresses;
- (id)initWithCapacity:;
- (id)copyWithZone:;
+ (id)set;
@end
