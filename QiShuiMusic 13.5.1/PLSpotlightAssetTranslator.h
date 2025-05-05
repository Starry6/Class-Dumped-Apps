@interface PLSpotlightAssetTranslator : NSObject
+ (id)_libraryScopeForAsset:;
+ (id)_locationNamesForAsset:;
+ (BOOL)_isUnnamedPeoplePersonDonationEnabled;
+ (id)_mediaTypesForAsset:;
+ (id)_scenesForAsset:sceneTaxonomyProvider:;
+ (BOOL)_isGoldilocksEnabledForManagedObjectContext:;
+ (id)_personsForAsset:;
+ (id)_spotlightSearchableAttributesForAsset:graphData:searchConfiguration:documentObservation:;
+ (id)_contentRatingForAsset:;
+ (id)spotlightSearchableItemFromAsset:graphData:searchConfiguration:documentObservation:;
@end
