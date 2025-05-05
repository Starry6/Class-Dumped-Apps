@interface GEOPDAutocompleteEntryCollection : PBCodable
@property (nonatomic) BOOL hasCollectionId;
@property (nonatomic) GEOPDMapsIdentifier collectionId;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (BOOL)hasGreenTeaWithValue:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasCollectionId;
- (id)collectionId;
- (void)setCollectionId:;
+ (BOOL)isValid:;
@end
