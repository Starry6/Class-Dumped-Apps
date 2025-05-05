@interface GEOSubPremise : PBCodable
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString name;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (void)setName:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (int)StringAsType:;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)setType:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (id)typeAsString:;
- (void)mergeFrom:;
- (int)type;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)name;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
