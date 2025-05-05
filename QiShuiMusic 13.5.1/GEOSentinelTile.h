@interface GEOSentinelTile : PBCodable
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString resourceName;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
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
- (id)dictionaryRepresentation;
- (id)resourceName;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setResourceName:;
+ (BOOL)isValid:;
@end
