@interface GEOGeoServiceTag : PBCodable
@property (nonatomic) BOOL hasServiceType;
@property (nonatomic) NSInteger serviceType;
@property (nonatomic) NSString tag;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)tag;
- (id)serviceTypeAsString:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (int)serviceType;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (int)StringAsServiceType:;
- (void)setServiceType:;
- (unsigned long long)hash;
- (BOOL)hasServiceType;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setTag:;
- (void)setHasServiceType:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
+ (id)defaultTag;
@end
