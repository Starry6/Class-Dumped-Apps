@interface GEOPDVendorSpecificPlaceRefinementParameters : PBCodable
- (id)init;
- (id)jsonRepresentation;
- (void)writeTo:;
- (unsigned long long)hash;
- (id)initWithData:;
- (id)initWithExternalBusinessID:contentProvider:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithSearchURLQuery:coordinate:muid:resultProviderId:contentProvider:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithMuid:locationHint:placeNameHint:resultProviderId:contentProvider:;
- (id)initWithMapItemToRefine:coordinate:contentProvider:;
@end
