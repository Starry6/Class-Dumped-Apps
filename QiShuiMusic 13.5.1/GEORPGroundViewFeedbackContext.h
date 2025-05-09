@interface GEORPGroundViewFeedbackContext : PBCodable
@property (nonatomic) BOOL hasViewState;
@property (nonatomic) GEOPDMuninViewState viewState;
@property (nonatomic) BOOL hasMetadataTileBuildId;
@property (nonatomic) I metadataTileBuildId;
@property (nonatomic) NSMutableArray onscreenImageResources;
@property (nonatomic) Q visiblePlaceMuidsCount;
@property (nonatomic) ^Q visiblePlaceMuids;
@property (nonatomic) BOOL hasImdataId;
@property (nonatomic) Q imdataId;
@property (nonatomic) BOOL hasImageId;
@property (nonatomic) NSString imageId;
@property (nonatomic) NSMutableArray visibleFeatureHandles;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)init;
- (void)dealloc;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (id)imageId;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setImageId:;
- (id)copyWithZone:;
- (BOOL)hasImageId;
- (BOOL)hasViewState;
- (id)viewState;
- (void)setViewState:;
- (unsigned int)metadataTileBuildId;
- (void)setMetadataTileBuildId:;
- (void)setHasMetadataTileBuildId:;
- (BOOL)hasMetadataTileBuildId;
- (id)onscreenImageResources;
- (void)setOnscreenImageResources:;
- (void)clearOnscreenImageResources;
- (void)addOnscreenImageResource:;
- (unsigned long long)onscreenImageResourcesCount;
- (id)onscreenImageResourceAtIndex:;
- (unsigned long long)visiblePlaceMuidsCount;
- (id)visiblePlaceMuids;
- (void)clearVisiblePlaceMuids;
- (void)addVisiblePlaceMuid:;
- (unsigned long long)visiblePlaceMuidAtIndex:;
- (void)setVisiblePlaceMuids:count:;
- (unsigned long long)imdataId;
- (void)setImdataId:;
- (void)setHasImdataId:;
- (BOOL)hasImdataId;
- (id)visibleFeatureHandles;
- (void)setVisibleFeatureHandles:;
- (void)clearVisibleFeatureHandles;
- (void)addVisibleFeatureHandle:;
- (unsigned long long)visibleFeatureHandlesCount;
- (id)visibleFeatureHandleAtIndex:;
+ (BOOL)isValid:;
+ (Class)onscreenImageResourceType;
+ (Class)visibleFeatureHandleType;
@end
