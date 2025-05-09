@interface GEONavigationRouteSummary : PBCodable
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) NSInteger transportType;
@property (nonatomic) BOOL hasOrigin;
@property (nonatomic) GEOComposedWaypoint origin;
@property (nonatomic) BOOL hasDestination;
@property (nonatomic) GEOComposedWaypoint destination;
@property (nonatomic) BOOL hasDestinationName;
@property (nonatomic) NSString destinationName;
@property (nonatomic) BOOL hasTravelTime;
@property (nonatomic) double travelTime;
- (double)travelTime;
- (void)setTravelTime:;
- (void)readAll:;
- (int)StringAsTransportType:;
- (void)setDestination:;
- (BOOL)hasGreenTeaWithValue:;
- (void)setTransportType:;
- (id)init;
- (void)clearSensitiveFields:;
- (void)setOrigin:;
- (void)setRoute:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (int)transportType;
- (id)destination;
- (unsigned long long)hash;
- (id)origin;
- (void)copyTo:;
- (BOOL)hasTransportType;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)transportTypeAsString:;
- (BOOL)readFrom:;
- (id)description;
- (void)setHasTransportType:;
- (id)dictionaryRepresentation;
- (BOOL)hasOrigin;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasDestinationName;
- (id)destinationName;
- (void)setDestinationName:;
- (BOOL)hasDestination;
- (void)setHasTravelTime:;
- (BOOL)hasTravelTime;
- (id)initWithRoute:destinationName:;
+ (BOOL)isValid:;
@end
