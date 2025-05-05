@interface ML3QueryResultSet_BackingStore : NSObject
@property (nonatomic) Q count;
- (void)enumerateSectionsUsingBlock:;
- (void)enumeratePersistentIDsUsingBlock:;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id).cxx_construct;
- (long long)persistentIDAtIndex:;
- (void)reverseEnumerateSectionsUsingBlock:;
- (void)reverseEnumeratePersistentIDsUsingBlock:;
- (BOOL)containsPersistentIDs:;
- (id)backingStoreByRemovingPersistentIDs:;
@end
