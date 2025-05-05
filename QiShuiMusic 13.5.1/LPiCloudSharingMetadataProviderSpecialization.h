@interface LPiCloudSharingMetadataProviderSpecialization : LPMetadataProviderSpecialization
- (void)cancel;
- (void)start;
- (void).cxx_destruct;
- (void)fail;
- (BOOL)canUseCloudKit;
- (id)initWithContext:applicationFromURL:kindFromURL:titleFromURL:;
- (id)applicationFromBundleIdentifiers:containerIdentifier:;
- (id)iconFromShare:;
- (void)completeWithShareMetadata:bundleIDs:;
- (void)completeUsingApplication:kind:title:thumbnail:;
- (BOOL)canRetrieveThumbnailForApplication:;
- (void)completeRetrievingThumbnailForShareMetadata:application:kind:title:;
+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForURLWithContext:;
+ (id)normalizeKind:forApplication:;
@end
