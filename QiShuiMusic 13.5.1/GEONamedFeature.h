@interface GEONamedFeature : PBCodable
@property (nonatomic) NSString name;
@property (nonatomic) double value;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (void)setName:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setValue:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (double)value;
- (id)name;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
