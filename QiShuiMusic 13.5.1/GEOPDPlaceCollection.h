@interface GEOPDPlaceCollection : PBCodable
- (id)init;
- (id)collectionHTMLDescription;
- (id)jsonRepresentation;
- (id)publisherHTMLDescriptionOfCollectionItem;
- (void)writeTo:;
- (id)collectionLongTitle;
- (unsigned long long)hash;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)publisherDescriptionOfCollectionItem;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)collectionTitle;
- (BOOL)isEqual:;
- (id)collectionDescription;
- (id)copyWithZone:;
+ (id)collectionComponentsForPlaceData:;
@end
