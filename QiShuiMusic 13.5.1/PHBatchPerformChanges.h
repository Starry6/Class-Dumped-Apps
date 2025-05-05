@interface PHBatchPerformChanges : NSObject
- (void).cxx_destruct;
- (BOOL)performChangesAndWait:;
- (void)performChangesWithCompletionHandler:;
- (id)initWithPhotoLibrary:itemCount:batchSize:batchBlock:;
- (BOOL)_performChangesAndWaitStartingAtIndex:error:;
- (unsigned long long)_performBatchAtIndexAndWait:error:;
- (void)_performChangesStartingAtIndex:withCompletionHandler:;
- (void)_performNextBatchAtIndex:withCompletionHandler:;
- (BOOL)_hasMoreBatchesAtIndex:;
- (id)_batchRangeAtIndex:;
- (unsigned long long)_performBatchAtIndex:;
- (BOOL)_addBatchRangeAtIndex:toOutError:;
- (id)_errorByAddingBatchRangeAtIndex:tofError:;
@end
