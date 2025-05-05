@interface PLDuplicateDetectorExactPixel : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)initWithSourceAssetOIDs:;
- (id)detectDuplicatesWithPhotoLibrary:error:;
- (id)_generateDuplicateContainerFromResults:excludedAssetOIDs:;
- (void)_addKey:value:map:;
- (id)_generateDuplicateContainerFromProcessedHashOIDMap:oidHashMap:;
- (void)_updateDuplicateAssetOIDResults:forAssetOID:relatedProcessedHashOIDMap:oidHashMap:;
- (void)_updateDuplicateAssetOIDResults:forHash:relatedProcessedHashOIDMap:oidHashMap:;
- (id)_excludedAssetOIDsWithPhotoLibrary:error:;
- (id)_sceneprintRequestWithPhotoLibrary:;
- (id)_excludedAssetOIDRequest;
- (id)_excludedAssetsFromMediaAnalysisRequest;
- (id)_limitedSelectionPredicateWithPhotoLibrary:;
- (id)_hashIsValidPredicate;
- (id)_predicateWithPhotoLibrary:;
- (void)_fetchLimitedSelectionHashes:alternativeHashes:photoLibrary:;
- (id)_propertiesToFetch;
- (BOOL)_postProcessDuplicateWithPhotoLibrary:resultContainer:error:;
- (id)_postProcessFetchMetadataWithPhotoLibrary:resultContainer:error:;
- (BOOL)_postProcessIsValidDateSource:;
- (id)_postProcessingRequestWithDuplicateAssetOIDs:;
- (id)_postProcessingRequestAssetsFromDuplicateAssetOIDs:;
@end
