@interface GEOWaypointLocation : PBCodable
@property (nonatomic) BOOL hasLocation;
@property (nonatomic) GEOLocation location;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (BOOL)hasGreenTeaWithValue:;
- (void)clearSensitiveFields:;
- (id)initWithJSON:;
- (BOOL)hasLocation;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (id)location;
- (void)mergeFrom:;
- (void)setLocation:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
