@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource
- (id)newManagedObjectContext;
- (void)contextWillSave:;
- (id)persistentStoreCoordinator;
- (unsigned long long)indexingPriority;
- (id)indexableObjectIDsMatchingPredicate:sortByReversedReindexingOrder:context:;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:;
- (id)dataSourceIdentifier;
- (id)addNotesFromSubtree:;
- (BOOL)isFolderWithServerShareChanged:;
@end
