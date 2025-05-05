@interface PLSpotlightProgressManager : NSObject
+ (BOOL)_addSearchableItemIdentifiers:operationType:forPhotoLibraryPathManager:isRetry:;
+ (BOOL)addSearchableItemIdentifiers:forOperationType:forPhotoLibraryPathManager:;
+ (BOOL)shouldReindexSpotlightIndexForPhotoLibraryPathManager:;
+ (BOOL)universalSearchEligibilityDidChangeForSPLWithDatabaseUUID:currentSPLPath:currentEligibility:;
+ (void)spotlightProgressForPhotoLibraryPathManager:completion:;
+ (BOOL)_shouldRetryRequestWithMostRecentAttemptOf:;
+ (BOOL)_writeProgressToDisk:forPhotoLibraryPathManager:;
+ (id)_storageKeyForOperationType:;
+ (id)_readProgressFromDiskForPhotoLibraryPathManager:;
+ (BOOL)setSpotlightIndexNeedsReindexing:forPhotoLibraryPathManager:;
+ (id)_minimumScheduledDateForNextReindexRetry;
+ (BOOL)shouldRetrySpotlightIndexDropForUniversalSearchEligibilityChange;
+ (BOOL)_shouldRetryReindexWithScheduledDateOf:;
+ (BOOL)shouldPerformSpotlightOperationsWithPhotoLibraryPathManager:;
+ (BOOL)shouldPerformSpotlightOperationOfType:withSearchableItemIdentifiers:photoLibraryPathManager:;
+ (BOOL)spotlightOperationCompletedForOperationType:withSearchableIdentifiers:forPhotoLibraryPathManager:success:;
+ (void)setUniversalSearchEligibility:systemPhotoLibraryPath:systemPhotoLibraryDatabaseUUID:needsSpotlightIndexDrop:needsSpotlightIndexRebuild:;
+ (BOOL)removeSearchableItemIdentifiers:forPhotoLibraryPathManager:;
+ (BOOL)didPreviouslySetSpotlightNeedsIndexRebuild;
+ (id)_progressFilePathForPhotoLibraryPathManager:;
+ (BOOL)spotlightResetOperationCompletedForPhotoLibraryPathManager:success:;
+ (id)_updateFailureCountsForSearchableItemIdentifiers:shouldIncrementCounts:forPhotoLibraryPathManager:;
+ (BOOL)deleteSpotlightProgressForPhotoLibraryPathManager:;
+ (id)lastKnownSystemPhotoLibraryPath;
@end
