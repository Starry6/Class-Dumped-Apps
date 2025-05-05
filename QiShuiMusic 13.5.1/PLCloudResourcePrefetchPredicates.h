@interface PLCloudResourcePrefetchPredicates : NSObject
+ (id)_masterPredicateForCPLResourceType:additionalAssetPredicates:additionalResourcePredicates:options:;
+ (id)predicateForOriginalResourcesForPrefetchLocallyAvailableOnly:;
+ (id)_predicateToPrefetchSuggestions:photoLibrary:options:;
+ (id)_resourcesToPrefetchForAsset:options:;
+ (id)_excludeMomentShareAssetsPredicate;
+ (id)predicatesForWidget:photoLibrary:;
+ (double)_resourceLastPrunedPrefetchTimeInterval;
+ (id)_prefetchResourceForAsset:inResourceTypes:options:;
+ (id)predicateToPrefetchMemories:photoLibrary:options:;
+ (id)predicatesForNonThumbnails:lastCompletePrefetchDate:;
+ (id)_predicateForImageResourcePixelsLessOrEqual:;
+ (id)_assetIsUnadjustedPredicate;
+ (id)_assetPredicateForCPLResourceType:additionalAssetPredicates:additionalResourcePredicates:options:;
+ (id)predicateToPrefetchHighlightWithUUIDs:photoLibrary:;
+ (id)_predicateToPrefetchMemoryKeyAssets:photoLibrary:options:;
+ (id)predicatesForThumbnails:;
+ (id)predicatesForOriginalResources:additionalResourcePredicates:;
+ (id)_predicateForResourceCreatedAfterDate:;
+ (id)_irisConditionPredicate;
+ (id)_predicateForMaxFilesize:;
+ (id)predicatesForMemories:photoLibrary:;
+ (id)_missingThumbnailPredicate;
@end
