@interface GEOPDSpatialEventLookupResponse : PBCodable
@property (nonatomic) BOOL hasEventId;
@property (nonatomic) GEOPDMapsIdentifier eventId;
@property (nonatomic) BOOL hasCenter;
@property (nonatomic) GEOLatLng center;
@property (nonatomic) Q categorysCount;
@property (nonatomic) ^i categorys;
@property (nonatomic) NSMutableArray eventDateTimes;
@property (nonatomic) BOOL hasTimezone;
@property (nonatomic) GEOTimezone timezone;
@property (nonatomic) BOOL hasPoiId;
@property (nonatomic) GEOPDMapsIdentifier poiId;
@property (nonatomic) PBUnknownFields unknownFields;
- (id)center;
- (void)readAll:;
- (id)unknownFields;
- (BOOL)hasGreenTeaWithValue:;
- (id)init;
- (void)setCenter:;
- (void)dealloc;
- (BOOL)hasTimezone;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)timezone;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)setTimezone:;
- (void)writeTo:;
- (BOOL)hasCenter;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasEventId;
- (id)eventId;
- (void)setEventId:;
- (id)categorys;
- (void)clearCategorys;
- (void)addCategory:;
- (unsigned long long)categorysCount;
- (int)categoryAtIndex:;
- (void)setCategorys:count:;
- (id)categorysAsString:;
- (int)StringAsCategorys:;
- (id)eventDateTimes;
- (void)setEventDateTimes:;
- (void)clearEventDateTimes;
- (void)addEventDateTime:;
- (unsigned long long)eventDateTimesCount;
- (id)eventDateTimeAtIndex:;
- (BOOL)hasPoiId;
- (id)poiId;
- (void)setPoiId:;
+ (BOOL)isValid:;
+ (Class)eventDateTimeType;
@end
