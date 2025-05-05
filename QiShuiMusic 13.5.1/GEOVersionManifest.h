@interface GEOVersionManifest : PBCodable
@property (nonatomic) NSMutableArray serviceVersions;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (void)setServiceVersions:;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (id)serviceVersionAtIndex:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (unsigned long long)serviceVersionsCount;
- (void)addServiceVersion:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)clearServiceVersions;
- (id)serviceVersions;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
+ (Class)serviceVersionType;
@end
