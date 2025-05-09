@interface GEOSharedNavLocationInfo : PBCodable
@property (nonatomic) BOOL hasCoordinate;
@property (nonatomic) GEOLatLng coordinate;
@property (nonatomic) BOOL hasMatchedCoordinateIndex;
@property (nonatomic) I matchedCoordinateIndex;
@property (nonatomic) BOOL hasMatchedCoordinateOffset;
@property (nonatomic) float matchedCoordinateOffset;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (BOOL)hasGreenTeaWithValue:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (id)coordinate;
- (BOOL)readFrom:;
- (id)description;
- (BOOL)hasCoordinate;
- (id)dictionaryRepresentation;
- (void)setCoordinate:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned int)matchedCoordinateIndex;
- (void)setMatchedCoordinateIndex:;
- (void)setHasMatchedCoordinateIndex:;
- (BOOL)hasMatchedCoordinateIndex;
- (float)matchedCoordinateOffset;
- (void)setMatchedCoordinateOffset:;
- (void)setHasMatchedCoordinateOffset:;
- (BOOL)hasMatchedCoordinateOffset;
+ (BOOL)isValid:;
@end
