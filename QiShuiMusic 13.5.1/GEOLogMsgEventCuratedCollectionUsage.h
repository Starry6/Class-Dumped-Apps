@interface GEOLogMsgEventCuratedCollectionUsage : PBCodable
@property (nonatomic) BOOL hasCollectionMuid;
@property (nonatomic) Q collectionMuid;
@property (nonatomic) BOOL hasViewsToday;
@property (nonatomic) I viewsToday;
@property (nonatomic) BOOL hasCollectionFirstViewedDate;
@property (nonatomic) double collectionFirstViewedDate;
@property (nonatomic) BOOL hasCollectionLastViewedDate;
@property (nonatomic) double collectionLastViewedDate;
@property (nonatomic) BOOL hasTouristInfo;
@property (nonatomic) GEOTouristInfo touristInfo;
@property (nonatomic) BOOL hasHomeCountryCode;
@property (nonatomic) NSString homeCountryCode;
@property (nonatomic) BOOL hasHomeMetroRegion;
@property (nonatomic) NSString homeMetroRegion;
- (void)readAll:;
- (id)init;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHomeCountryCode:;
- (void)mergeFrom:;
- (id)homeCountryCode;
- (BOOL)hasTouristInfo;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (void)setTouristInfo:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)touristInfo;
- (id)copyWithZone:;
- (unsigned long long)collectionMuid;
- (void)setCollectionMuid:;
- (void)setHasCollectionMuid:;
- (BOOL)hasCollectionMuid;
- (unsigned int)viewsToday;
- (void)setViewsToday:;
- (void)setHasViewsToday:;
- (BOOL)hasViewsToday;
- (double)collectionFirstViewedDate;
- (void)setCollectionFirstViewedDate:;
- (void)setHasCollectionFirstViewedDate:;
- (BOOL)hasCollectionFirstViewedDate;
- (double)collectionLastViewedDate;
- (void)setCollectionLastViewedDate:;
- (void)setHasCollectionLastViewedDate:;
- (BOOL)hasCollectionLastViewedDate;
- (BOOL)hasHomeCountryCode;
- (BOOL)hasHomeMetroRegion;
- (id)homeMetroRegion;
- (void)setHomeMetroRegion:;
+ (BOOL)isValid:;
@end
