@interface GEOStorageCompletion : PBCodable
@property (nonatomic) BOOL hasAutocompleteEntry;
@property (nonatomic) GEOPDAutocompleteEntry autocompleteEntry;
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
- (id)autocompleteEntry;
- (void)setAutocompleteEntry:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAutocompleteEntry;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)applyToUserSearchInput:;
+ (BOOL)isValid:;
+ (id)storageForCompletionItem:;
@end
