@interface PLBackgroundJobDuplicateDetectorWorker : PLBackgroundJobWorker
@property (nonatomic) NSObject<NSCopying> cancelledWorkItem;
- (void)_setupPropertiesWithLibrary:;
- (BOOL)isInterruptible;
- (id)_convertToPLManagedAssetOIDsFromSelectionOIDs:library:;
- (BOOL)_shouldCancelCurrentWorkItem:;
- (BOOL)_isFullLibraryWorkItem:;
- (void)stopWorkingOnItem:;
- (id)_validObjectIDFromChange:entityDescriptionMap:requiresFingerprintDedupe:;
- (id)_transactionIteratorSinceTokenIfValid:library:error:;
- (id)workItemsNeedingProcessingInLibrary:;
- (id)_lastDuplicateDetectorProcessingTokenFromLibrary:;
- (void)performWorkOnItem:inLibrary:completion:;
- (void)setCancelledWorkItem:;
- (id)_managedAssetOIDsFromDuplicateAlbumOIDs:library:;
- (void).cxx_destruct;
- (void)_resetCancelledWorkItem;
- (id)cancelledWorkItem;
- (BOOL)_processDuplicatesWithLimitedSelection:requiresFingerprintDedupe:library:error:continuationHandler:;
- (id)_managedAssetOIDsFromAdditionalAssetAttributesOIDs:library:;
- (BOOL)_hasCompletedPerceptualProcessingWithLibrary:;
- (void)_setLastDuplicateDetectorProcessingToken:isCompleted:library:;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:;
+ (BOOL)_isTokenInvalidError:;
@end
