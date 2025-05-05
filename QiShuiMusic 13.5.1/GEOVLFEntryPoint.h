@interface GEOVLFEntryPoint : PBCodable
@property (nonatomic) BOOL hasAccessPoint;
@property (nonatomic) NSInteger accessPoint;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasAccessPoint;
- (int)accessPoint;
- (void)setAccessPoint:;
- (void)setHasAccessPoint:;
- (id)accessPointAsString:;
- (int)StringAsAccessPoint:;
+ (BOOL)isValid:;
@end
