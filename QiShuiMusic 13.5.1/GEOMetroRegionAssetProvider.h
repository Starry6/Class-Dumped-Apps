@interface GEOMetroRegionAssetProvider : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)_bestAvailableAssetForAssetCode:;
- (id)urlForInstalledCountryCode:;
- (id)_acceptListForCountryCode:name:;
- (id)homeMetroAcceptListForCountryCode:;
- (id)homeCountryCodeAcceptList;
- (void)_updateCatalogAfterDelay:;
- (void)_catalogDownloadFinishedWithResult:;
+ (id)_maQueryForAssetCode:;
+ (void)_downloadCatalogIfNeededThen:;
+ (id)sharedProvider;
+ (void)_downloadAsset:completion:;
+ (void)_unavailableAssetForAssetCode:completion:;
+ (void)preloadAssetForCountryCode:preloadQueue:completion:;
+ (void)_updateCatalogWithResult:;
@end
