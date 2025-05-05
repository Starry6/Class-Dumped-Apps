@interface GEOARInfo : PBCodable
@property (nonatomic) NSMutableArray storefrontFaceGeometrys;
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
- (id)storefrontFaceGeometrys;
- (void)setStorefrontFaceGeometrys:;
- (void)clearStorefrontFaceGeometrys;
- (void)addStorefrontFaceGeometry:;
- (unsigned long long)storefrontFaceGeometrysCount;
- (id)storefrontFaceGeometryAtIndex:;
+ (BOOL)isValid:;
+ (Class)storefrontFaceGeometryType;
@end
