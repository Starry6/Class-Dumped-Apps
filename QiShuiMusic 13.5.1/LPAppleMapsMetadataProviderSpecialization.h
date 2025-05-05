@interface LPAppleMapsMetadataProviderSpecialization : LPMetadataProviderSpecialization
- (void)complete;
- (void)cancel;
- (void)start;
- (void).cxx_destruct;
- (void)fail;
- (id)geocoder;
- (void)resolveMapRegionWithCompletionHandler:;
- (void)continueWithLookAroundSnapshotWithOptions:;
- (void)continueWithSnapshotOfMapRegion:;
- (void)continueWithSnapshotOfMapItems:inRegion:;
- (void)completeWithSearchQuery:;
- (void)completeWithMapItem:;
- (void)completeWithPlacemark:;
- (void)completeWithDirections;
- (void)completeWithCollection;
- (void)completeWithCuratedCollection;
- (void)completeWithPublisher;
+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForURLWithContext:;
@end
