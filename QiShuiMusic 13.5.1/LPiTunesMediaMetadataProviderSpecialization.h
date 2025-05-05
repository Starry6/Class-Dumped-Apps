@interface LPiTunesMediaMetadataProviderSpecialization : LPMetadataProviderSpecialization
- (id)schema;
- (void)cancel;
- (void)start;
- (void).cxx_destruct;
- (void)resolve;
- (void)completed;
- (void)done;
- (void)fail;
- (id)initWithIdentifier:storefrontCountryCode:withContext:;
- (id)initWithLyricComponents:withContext:;
- (id)processResponseDictionary:withStorefrontIdentifier:;
+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForURLWithContext:;
+ (id)specializedMetadataProviderForMetadata:withContext:;
+ (long long)determineOrientationOfScreenshotsInArray:;
+ (id)assetArrayScreenshotArray:;
+ (id)assetArrayFromScreenshotArray:;
+ (id)assetArrayFromScreenshotDictionary:usingPreferredPlatformArray:;
+ (id)assetFromVideoPreviewDictionary:usingPreferredPlatformArray:;
+ (id)extractOffers:;
+ (void)requestSourceApplicationMetadataForBundleIdentifier:completionHandler:;
@end
