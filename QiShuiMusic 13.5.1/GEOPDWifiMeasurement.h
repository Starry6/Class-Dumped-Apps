@interface GEOPDWifiMeasurement : PBCodable
- (id)init;
- (id)jsonRepresentation;
- (void)writeTo:;
- (unsigned long long)hash;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
