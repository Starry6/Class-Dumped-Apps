@interface PLCloudPhotoLibraryHelper : NSObject
+ (void)enableCPL:;
+ (void)setShouldClearPurgeableResourcesOnce:;
+ (void)setShouldHandleOptimizeModeChange:;
+ (BOOL)shouldRepushVideoAssetsMetadataOnce;
+ (void)disableCPL:;
+ (void)setShouldRepushAssetsWithImportedByBundleIdentifier:;
+ (BOOL)shouldHandleOptimizeModeChange;
+ (void)setShouldRepushMasterWithMissingMediaMetadataOnce:;
+ (BOOL)shouldClearPurgeableResourcesOnce;
+ (BOOL)shouldRepushAssetsWithImportedByBundleIdentifier;
+ (void)setShouldSendOptimizeFeedbackOnce:;
+ (void)setShouldMarkPurgeableResourcesOnce:;
+ (BOOL)shouldSendOptimizeFeedbackOnce;
+ (BOOL)shouldMarkPurgeableResourcesOnce;
+ (void)_donateTipsAppEnablementSignal;
+ (void)setShouldRepushVideoAssetsMetadataOnce:;
+ (BOOL)shouldRepushMasterWithMissingMediaMetadataOnce;
@end
