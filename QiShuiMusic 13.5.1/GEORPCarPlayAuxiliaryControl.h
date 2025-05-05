@interface GEORPCarPlayAuxiliaryControl : PBCodable
@property (nonatomic) BOOL hasCarInfo;
@property (nonatomic) GEOCarInfo carInfo;
- (void)readAll:;
- (BOOL)hasCarInfo;
- (id)initWithJSON:;
- (id)carInfo;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setCarInfo:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
