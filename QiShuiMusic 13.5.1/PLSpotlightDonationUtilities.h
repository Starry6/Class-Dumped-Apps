@interface PLSpotlightDonationUtilities : NSObject
+ (id)bundleIdentifierForAsset:;
+ (id)domainIdentifierForSystemPhotoLibrary;
+ (id)domainIdentifierForPhotoLibrary:;
+ (id)photosBundleIdentifier;
+ (BOOL)shouldForceSpotlightReindexForCurrentBundleIdentifierWithLastKnownSearchIndexVersion:;
+ (id)spotlightUniqueIdentifierForAsset:;
+ (long long)_wellKnownPhotoLibraryIdentifierFromPLPhotoLibrary:;
+ (BOOL)searchableItemsFromManagedObjectIDs:entityName:translatorConfiguration:photoLibrary:searchableItemsToIndex:searchableItemUUIDsToRemove:;
+ (void)_searchableItemsFromManagedObjects:entityName:translatorConfiguration:itemsToUpdate:searchableItemUUIDsToRemove:;
+ (unsigned long long)universalSearchIneligibilityReasonsForPhotoLibraryWithURL:;
+ (BOOL)isUniversalSearchEnabledForPhotoLibrary:;
+ (BOOL)isFullLocationDataEnabled;
+ (BOOL)shouldDisablePhotosLegacySearchDonationForPhotoLibrary:;
+ (id)searchableItemsFromManagedObjects:entityName:translatorConfiguration:;
@end
