@interface BWIrisStillImageMovieMetadataCache : BWSimpleCache
- (void)cacheStillImageTransformDataFromMetadata:transformReferenceDimensions:;
- (void)cacheStillImageVideoToPhotoTransform:forSettingsID:;
- (id)copyAndClearStillImageTransformDataForSettingsID:;
@end
