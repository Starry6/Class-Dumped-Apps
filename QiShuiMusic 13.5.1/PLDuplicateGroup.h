@interface PLDuplicateGroup : NSObject
@property (nonatomic) NSSet group;
@property (nonatomic) NSSet excludedGroup;
@property (nonatomic) NSSet subGroups;
@property (nonatomic) BOOL hasExcludedItems;
@property (nonatomic) BOOL hasSubGroups;
- (id)init;
- (id)debugDescription;
- (id)group;
- (void).cxx_destruct;
- (id)initWithGroupResults:;
- (id)printStringListFromOIDs:;
- (id)excludedGroup;
- (id)subGroups;
- (BOOL)hasExcludedItems;
- (BOOL)hasSubGroups;
- (void)addManagedObjectID:;
- (void)addSubGroup:;
- (void)replaceSubGroups:;
- (void)excludeManagedObjectID:;
- (void)compactSubGroups;
@end
