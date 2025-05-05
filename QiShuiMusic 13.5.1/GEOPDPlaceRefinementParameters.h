@interface GEOPDPlaceRefinementParameters : PBCodable
- (BOOL)_hasRequiredFields;
- (id)init;
- (unsigned long long)_routeHypothesisPlaceRefinementParametersHash;
- (id)initWithIdentifier:placeNameHint:locationHint:;
- (id)jsonRepresentation;
- (id)initWithSearchURLQuery:identifier:;
- (void)writeTo:;
- (unsigned long long)hash;
- (BOOL)_routeHypothesisPlaceRefinementParametersIsEqual:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)initWithMapItemToRefine:coordinate:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
