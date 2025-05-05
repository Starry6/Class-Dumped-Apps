@interface GEOPDWifiAccessPoint : PBCodable
- (id)jsonRepresentation;
- (void)writeTo:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithGEOWifiAccessPoint:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
