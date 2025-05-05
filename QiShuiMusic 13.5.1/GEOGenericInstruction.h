@interface GEOGenericInstruction : PBCodable
@property (nonatomic) BOOL hasManeuver;
@property (nonatomic) NSString maneuver;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasManeuver;
- (id)maneuver;
- (void)setManeuver:;
+ (BOOL)isValid:;
@end
