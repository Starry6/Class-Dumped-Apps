@interface PLDuplicateDetectorMetadata : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)initWithSourceAssetOIDs:;
- (id)detectDuplicatesWithPhotoLibrary:error:;
- (id)_limitedSelectionPredicateWithPhotoLibrary:;
- (id)_predicateWithPhotoLibrary:;
- (id)_propertiesToFetch;
- (BOOL)_postProcessDuplicateWithPhotoLibrary:resultContainer:error:;
- (id)_postProcessFetchMetadataWithPhotoLibrary:resultContainer:error:;
- (id)_postProcessingRequestWithDuplicateAssetOIDs:;
- (id)_generateDuplicateContainerFromResults:fullsizeFingerprintResults:;
- (void)_buildAdjustedFingerprintMapWithPrimaryStoreFullsizeFingerprintResults:mutableOIDFingerprintMap:filterOnCPLResourceType:;
- (void)_addFingerprint:oid:map:;
- (id)_fingerprintRequestWithPhotoLibrary:;
- (id)_fingerprintIsValidPredicate;
- (id)_fullSizePreviewFingerprintRequestWithPhotoLibrary:;
- (id)_limitedSelectionFullSizePredicateWithPhotoLibrary:;
- (id)_fullsizeFingerprintIsValidFullSizePredicate;
- (id)_fullSizePreviewPredicateWithPhotoLibrary:;
- (id)_fullSizePropertiesToFetch;
- (id)_combinedIdentifiersFromLimitedSelectionWithPhotoLibrary:;
- (id)_originalsIdentifiersFromLimitedSelectionWithPhotoLibrary:;
- (id)_fullsizeIdentifiersFromLimitedSelectionWithPhotoLibrary:;
@end
