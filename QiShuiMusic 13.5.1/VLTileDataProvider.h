@interface VLTileDataProvider : NSObject
@property (nonatomic) BOOL shouldCacheMetadata;
@property (nonatomic) <VLLocalizationDataProviderDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)_disburseMetadataTileForKey:tileData:error:;
- (void)_fetchDataTile:originalKey:additionalInfo:;
- (void)setShouldCacheMetadata:;
- (void)setDelegate:;
- (void)_commonInitWithTileLoader:auditToken:supportedFormatVersions:;
- (void)determineAvailabilityForCoordinate:horizontalAccuracy:purpose:callbackQueue:callback:;
- (BOOL)shouldCacheMetadata;
- (id)fileURLForKey:error:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_fetchMetadataForCoordinate:completionHandler:;
- (id)initWithAuditToken:supportedFormatVersions:;
- (void)_fetchMetadataTile:completionHandler:;
- (void)_fetchMetadataForDataKey:completionHandler:;
- (id).cxx_construct;
@end
