@interface ML3QueryResultSet : NSObject
@property (nonatomic) ML3Query query;
@property (nonatomic) Q count;
@property (nonatomic) q revision;
@property (nonatomic) q localRevision;
- (id)sectionIndexTitles;
- (void)enumerateSectionHeadersUsingBlock:;
- (id)initWithQuery:;
- (void)enumerateSectionsUsingBlock:;
- (void)enumeratePersistentIDsUsingBlock:;
- (unsigned long long)entityLimit;
- (id)query;
- (void).cxx_destruct;
- (long long)revision;
- (unsigned long long)count;
- (id)copyWithZone:;
- (BOOL)updateToLibraryCurrentRevision;
- (long long)localRevision;
- (long long)persistentIDAtIndex:;
- (id)_initWithQuery:supportsIncrementalUpdate:;
- (void)_loadCurrentFullResults;
- (void)_mergeChangesWithFromNewPIDs:changedPIDs:;
- (void)_onQueueAddUpdateFinishedBlock:;
- (void)_onQueueInvokeAndClearUpdateFinishedBlocksWithDidUpdateResult:;
- (BOOL)_updateToLibraryCurrentRevision;
@end
