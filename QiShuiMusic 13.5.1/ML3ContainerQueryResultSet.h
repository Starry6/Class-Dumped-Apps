@interface ML3ContainerQueryResultSet : ML3QueryResultSet
- (id)initWithQuery:;
- (void)enumerateSectionsUsingBlock:;
- (void)enumeratePersistentIDsUsingBlock:;
- (unsigned long long)entityLimit;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (long long)persistentIDAtIndex:;
- (void)_loadCurrentFullResults;
- (BOOL)_updateToLibraryCurrentRevision;
- (id)sortedBackingStoreForDisplayOrdering;
@end
