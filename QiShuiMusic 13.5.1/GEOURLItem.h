@interface GEOURLItem : PBCodable
- (id)mapItem;
- (id)init;
- (id)jsonRepresentation;
- (void)writeTo:;
- (void)setMapItem:;
- (unsigned long long)hash;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
