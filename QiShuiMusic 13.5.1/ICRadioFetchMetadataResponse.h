@interface ICRadioFetchMetadataResponse : ICRadioResponse
@property (nonatomic) NSArray allStorePlatformMetadata;
- (id)allStorePlatformMetadata;
- (id)storePlatformMetadataForStoreAdamID:;
- (id)_storePlatformMetadataDictionaryFromRadioMetadataDictionary:;
@end
