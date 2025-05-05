@interface GEOTransitSurchargeUnit : PBCodable
@property (nonatomic) BOOL hasPrice;
@property (nonatomic) GEOTransitPrice price;
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
- (id)price;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasPrice;
- (void)setPrice:;
+ (BOOL)isValid:;
@end
