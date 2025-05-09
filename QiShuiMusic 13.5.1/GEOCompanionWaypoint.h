@interface GEOCompanionWaypoint : PBCodable
@property (nonatomic) GEOLocation location;
@property (nonatomic) BOOL hasMapItem;
@property (nonatomic) GEOMapItemStorage mapItem;
@property (nonatomic) BOOL hasWaypointTyped;
@property (nonatomic) GEOWaypointTyped waypointTyped;
@property (nonatomic) BOOL hasIsCurrentLocation;
@property (nonatomic) BOOL isCurrentLocation;
@property (nonatomic) BOOL hasSearchString;
@property (nonatomic) NSString searchString;
- (id)mapItem;
- (void)readAll:;
- (BOOL)hasGreenTeaWithValue:;
- (void)setSearchString:;
- (id)init;
- (void)clearSensitiveFields:;
- (id)searchString;
- (id)initWithJSON:;
- (void)setIsCurrentLocation:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setMapItem:;
- (void)setHasIsCurrentLocation:;
- (unsigned long long)hash;
- (void)copyTo:;
- (BOOL)isCurrentLocation;
- (id)location;
- (void)mergeFrom:;
- (BOOL)hasIsCurrentLocation;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasMapItem;
- (BOOL)hasWaypointTyped;
- (id)waypointTyped;
- (void)setWaypointTyped:;
- (BOOL)hasSearchString;
- (id)initWithComposedWaypoint:;
+ (BOOL)isValid:;
@end
