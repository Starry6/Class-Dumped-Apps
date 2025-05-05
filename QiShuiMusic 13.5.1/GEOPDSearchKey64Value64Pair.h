@interface GEOPDSearchKey64Value64Pair : PBCodable
- (id)jsonRepresentation;
- (void)writeTo:;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
