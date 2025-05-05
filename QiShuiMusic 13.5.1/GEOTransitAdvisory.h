@interface GEOTransitAdvisory : PBCodable
@property (nonatomic) BOOL hasText;
@property (nonatomic) GEOFormattedString text;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)initWithJSON:;
- (BOOL)hasText;
- (id)jsonRepresentation;
- (void)setText:;
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
- (id)text;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
