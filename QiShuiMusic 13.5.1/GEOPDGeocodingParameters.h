@interface GEOPDGeocodingParameters : PBCodable
- (id)init;
- (id)initWithForwardGeocodeAddressString:maxResults:traits:;
- (id)jsonRepresentation;
- (id)initWithForwardGeocodeAddress:maxResults:traits:;
- (void)writeTo:;
- (unsigned long long)hash;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithForwardGeocodeAddress:addressString:maxResults:traits:;
@end
