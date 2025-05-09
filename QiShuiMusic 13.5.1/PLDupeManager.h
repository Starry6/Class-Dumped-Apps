@interface PLDupeManager : NSObject
@property (nonatomic) PLPhotoLibrary photoLibrary;
- (id)photoLibrary;
- (void)dealloc;
- (BOOL)_analyzeDupeForCloudAssetsAndHashes:andPublicGlobalUUIDs:forManagedObjectContext:;
- (short)_adjustCloudAssetVisibilityStateForManagedObjectContext:;
- (void)analyzeDupesWithNormalInserts:cloudInserts:completionHandler:;
- (id)_duplicateCloudAssetForHash:orPublicGlobalUUID:;
- (BOOL)_prepareCloudAssetsToAnalyzeForManagedObjectContext:;
- (id)initWithLibraryServicesManager:;
- (void)pauseAnalysisWithReason:;
- (short)_analyzeDupesForCloudInsertsForManagedObjectContext:;
- (void)resumeAnalysisWithReason:;
- (short)_analyzeNormalAssetsForManagedObjectContext:;
- (void)_removeCloudAssetFromAnalysis:;
- (void)_continueAnalysis;
- (void).cxx_destruct;
- (void)_resetSoftPauseReasons;
- (short)_computeCloudAssetHashesForManagedObjectContext:;
- (short)_computeAssetHashesForManagedObjectContext:;
- (short)_analyzeDupesForNormalInsertsForManagedObjectContext:;
- (void)persistPublicGlobalUUIDsForAssets:completionHandler:;
- (void)resetDupesAnalysis;
- (void)_continueAnalysisForRebuildOrPause;
- (void)_analyzeDupes;
- (void)_continueAnalysisForRebuild;
- (void)_performAnalysisTransaction:completionHandler:;
- (void)_noteAssetVisibilityDidChange:;
- (void)_analyzeDupesForRebuild;
- (void)_analyzeDupeForNormalAsset:;
- (void)_updateVisibilityState:forAsset:;
- (void)launchDupeAnalysisIfNeeded;
+ (BOOL)_resetDupesAnalysisInManagedObjectContext:pathManager:;
+ (BOOL)resetDupesAnalysisForOfflineStore:pathManager:;
+ (id)_hashForFileAtPath:utiType:;
+ (id)placeholderHash;
+ (void)_setPlaceHolderHashOnAsset:;
+ (id)hashForAsset:;
+ (BOOL)_computeHashForAsset:;
@end
