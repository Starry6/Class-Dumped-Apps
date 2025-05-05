@interface GEOPDDataItem : PBCodable
- (id)init;
- (id)locationName;
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
- (id)categoryName;
@end
