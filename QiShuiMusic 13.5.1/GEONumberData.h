@interface GEONumberData : PBCodable
@property (nonatomic) BOOL hasValue;
@property (nonatomic) float value;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (BOOL)hasValue;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasValue:;
- (void)mergeFrom:;
- (void)setValue:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (float)value;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
