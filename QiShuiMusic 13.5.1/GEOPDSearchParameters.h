@interface GEOPDSearchParameters : PBCodable
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
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSearchQuery:entryMetadata:metadata:autocompleteEntry:retainedSearch:maxResults:traits:routeInfo:;
@end
