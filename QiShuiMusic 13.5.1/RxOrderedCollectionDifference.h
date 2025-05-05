@interface RxOrderedCollectionDifference : NSObject
@property (nonatomic) NSArray insertions;
@property (nonatomic) NSArray removals;
@property (nonatomic) BOOL hasChanges;
- (id)__changeWithType:index:object:;
- (void)__enumerateChangesInDiffOrderWithBlock:;
- (BOOL)hasChanges;
- (id)init;
- (void)dealloc;
- (id)initWithChanges:;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithInsertIndexes:insertedObjects:removeIndexes:removedObjects:;
- (id)initWithInsertIndexes:insertedObjects:removeIndexes:removedObjects:additionalChanges:;
- (id)insertions;
- (id)removals;
- (id)differenceByTransformingChangesWithBlock:;
- (id)inverseDifference;
@end
