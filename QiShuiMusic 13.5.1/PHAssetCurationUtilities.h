@interface PHAssetCurationUtilities : NSObject
+ (id)assetsShowcasingFoodWithoutFacesInAssets:;
+ (BOOL)assetIsSafeForWidgetDisplay:;
+ (double)NSFWGeneralConfidenceThresholdForSceneAnalysisVersion:;
+ (double)IVSNSFWAnyConfidenceThresholdForSceneAnalysisVersion:;
+ (double)tabooEventConfidenceThresholdForIdentifier:forSceneAnalysisVersion:;
+ (BOOL)_isTabooEventIdentifier:;
+ (double)_tabooVersion33ConfidenceThresholdForIdentifier:;
+ (double)_tabooVersion50ConfidenceThresholdForIdentifier:;
+ (double)_tabooVersion85ConfidenceThresholdForIdentifier:;
+ (id)syndicationEligibilityForAssets:;
+ (id)internalPredicateToFilterAssetsEligibleForSyndication;
+ (id)internalPredicateToFilterSyndicatedAssetsEligibleForQuestion;
+ (id)internalPredicateToFilterGuestSyndicatedAssetsEligibleForQuestion;
+ (id)internalPredicateToFilterSyndicatedAssetsEligibleForCurationProcessing;
+ (id)internalPredicateToFilterSyndicatedAssetsEligibleForGuestInferenceProcessing;
+ (id)internalPredicateToIncludeOnlyReceivedSyndicatedAssets;
+ (id)internalPredicateToIncludeOnlySentSyndicatedAssets;
+ (id)internalPredicateToIncludeReceivedNotAnalyzedSyndicatedAssets;
+ (id)internalPredicateToIncludeReceivedNotEligibleSyndicatedAssets;
+ (id)previewCandidatesFromAssets:;
+ (id)filteredAndSortedPreviewAssetsByScoreFromAssets:targetSize:;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:assetLatitude:assetLongitude:;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:assetLatitude:assetLongitude:sceneGeography:;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:assetLatitude:assetLongitude:sceneGeography:maxScenesCount:;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:POIGeoHash:sceneGeography:;
+ (double)assetIconicScoreForSceneClassificationIdentifiers:POIGeoHash:sceneGeography:maxScenesCount:;
@end
