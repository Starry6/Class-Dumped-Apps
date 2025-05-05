@interface MPStoreArtworkDataSource : MPAbstractNetworkArtworkDataSource
- (id)bestAvailableSizeForCatalog:;
- (id)cacheKeyForCatalog:kind:size:;
- (id)supportedSizesForCatalog:;
- (void)getExportableArtworkPropertiesForCatalog:completionHandler:;
- (id)existingArtworkEffectResultForEffectType:catalog:options:;
- (id)_bestSizeForImageSizeInfo:catalog:;
- (BOOL)areRepresentationsOfKind:availableForCatalog:;
- (id)requestForCatalog:kind:size:;
- (id)visualIdenticalityIdentifierForCatalog:;
- (id)sortedSupportedSizesForCatalog:;
- (BOOL)wantsBackgroundImageDecompression;
- (id)_bestURLForCatalog:kind:size:;
+ (id)sharedStoreArtworkDataSource;
@end
