@interface MPTiledArtworkDataSource : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)cancelLoadingRepresentationForArtworkCatalog:;
- (void)loadRepresentationForArtworkCatalog:completionHandler:;
- (id)existingArtworkEffectResultForEffectType:catalog:options:;
- (id)existingRepresentationForArtworkCatalog:;
- (void).cxx_destruct;
- (BOOL)areRepresentationsAvailableForCatalog:;
- (BOOL)isRepresentation:bestRepresentationForArtworkCatalog:;
- (id)visualIdenticalityIdentifierForCatalog:;
- (void)_performSyncBlock:;
- (void)loadArtworkEffectResultForEffectType:catalog:options:systemEffectHandler:completionHandler:;
- (void)_addLoadingRequestForArtworkCatalog:;
- (BOOL)_hasLoadingRequestForArtworkCatalog:;
- (void)_performAsyncBlock:;
- (void)_removeLoadingRequestForArtworkCatalog:;
+ (id)sharedDataSource;
+ (id)_representationCacheKeyForArtworkCatalog:forAnyRevision:;
+ (id)_errorWithDescription:;
+ (id)_loadingRequestForArtworkCatalog:;
+ (id)_tileSizeForFittingSize:rows:columns:spacing:;
@end
