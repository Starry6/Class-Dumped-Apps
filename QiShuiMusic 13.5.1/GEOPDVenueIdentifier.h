@interface GEOPDVenueIdentifier : PBCodable
- (id)init;
- (void)dealloc;
- (id)jsonRepresentation;
- (void)writeTo:;
- (unsigned long long)hash;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithVenueID:featureID:businessID:;
- (id)initWithVenueID:featureID:businessID:componentIdentifier:;
@end
