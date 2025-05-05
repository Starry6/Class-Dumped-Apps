@interface GEOCyclingVehicleSpecifications : PBCodable
@property (nonatomic) BOOL hasIsEbike;
@property (nonatomic) BOOL isEbike;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (BOOL)hasIsEbike;
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
- (void)setIsEbike:;
- (void)setHasIsEbike:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEbike;
+ (BOOL)isValid:;
@end
