@interface GEOPDModuleOptions : PBCodable
@property (nonatomic) BOOL hasWebContentUrl;
@property (nonatomic) NSString webContentUrl;
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
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasWebContentUrl;
- (id)webContentUrl;
- (void)setWebContentUrl:;
+ (BOOL)isValid:;
@end
