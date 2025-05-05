@interface MPModelStoreBrowseContentItemBuilder : MPStoreModelObjectBuilder
@property (nonatomic) BOOL allowsRadioStations;
@property (nonatomic) BOOL allowsVideoContent;
- (void)setPreventStoreItemMetadataCaching:;
- (long long)contentItemTypeForStoreItemMetadata:;
- (long long)contentItemTypeForRawResponseKindIdentifiers:;
- (BOOL)allowsRadioStations;
- (id)modelObjectWithStoreItemMetadata:sourceModelObject:userIdentity:;
- (BOOL)allowsVideoContent;
- (long long)contentItemTypeForRawResponseKindIdentifierValue:;
- (void).cxx_destruct;
- (long long)contentItemTypeForMusicAPIType:;
- (id)initWithRequestedPropertySet:;
- (void)setAllowsVideoContent:;
- (void)setAllowsRadioStations:;
+ (id)allSupportedProperties;
@end
