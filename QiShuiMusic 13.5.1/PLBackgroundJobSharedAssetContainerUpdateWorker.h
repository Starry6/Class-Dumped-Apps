@interface PLBackgroundJobSharedAssetContainerUpdateWorker : PLBackgroundJobWorker
- (id)workItemsNeedingProcessingInLibrary:;
- (void)performWorkOnItem:inLibrary:completion:;
+ (BOOL)_updateSharingCompositionForMemoriesContainingAssetIDs:inContext:error:;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:;
+ (BOOL)performWorkOnAllItemsInContext:withError:;
+ (id)_lastProcessingTokenFromLibrary:;
+ (id)_transactionIteratorSinceTokenIfValid:library:error:;
+ (BOOL)_isTokenInvalidError:;
+ (BOOL)_updateSharingCompositionForSuggestionsContainingAssetIDs:inContext:error:;
+ (void)_setLastProcessingToken:library:;
+ (id)_memoriesContainingAssetIds:inContext:error:;
+ (id)_suggestionsContainingAssetIds:inContext:error:;
@end
