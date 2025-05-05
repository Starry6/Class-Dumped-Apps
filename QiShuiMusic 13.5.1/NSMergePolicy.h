@interface NSMergePolicy : NSObject
@property (nonatomic) Q mergeType;
- (id)init;
- (void)dealloc;
- (void)_mergeChangesObjectUpdatesTrumpForObject:withRecord:;
- (BOOL)resolveConstraintConflicts:error:;
- (id)initWithCoder:;
- (void)mergeToManyRelationshipForSourceObject:withOldSnapshot:newSnapshot:andAncestor:andLegacyPath:;
- (BOOL)resolveConflicts:error:;
- (void)encodeWithCoder:;
- (BOOL)resolveOptimisticLockingVersionConflicts:error:;
- (void)_mergeChangesStoreUpdatesTrumpForObject:withRecord:;
- (unsigned long long)mergeType;
- (id)mutableCopyWithZone:;
- (id)initWithMergeType:;
- (id)copyWithZone:;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)supportsSecureCoding;
+ (id)errorMergePolicy;
+ (id)mergeByPropertyStoreTrumpMergePolicy;
+ (id)overwriteMergePolicy;
+ (id)rollbackMergePolicy;
+ (id)mergeByPropertyObjectTrumpMergePolicy;
@end
