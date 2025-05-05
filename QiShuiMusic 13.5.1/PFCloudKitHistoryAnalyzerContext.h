@interface PFCloudKitHistoryAnalyzerContext : PFHistoryAnalyzerContext
- (BOOL)processChange:error:;
- (void)dealloc;
- (id)newAnalyzerStateForChange:error:;
- (BOOL)finishProcessing:;
- (id)fetchSortedStates:;
- (BOOL)resetStateForObjectID:error:;
- (BOOL)reset:;
- (id)initWithOptions:managedObjectContext:store:;
@end
