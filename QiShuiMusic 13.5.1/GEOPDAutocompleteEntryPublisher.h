@interface GEOPDAutocompleteEntryPublisher : PBCodable
@property (nonatomic) BOOL hasPublisherId;
@property (nonatomic) GEOPDMapsIdentifier publisherId;
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
- (BOOL)hasPublisherId;
- (id)publisherId;
- (void)setPublisherId:;
+ (BOOL)isValid:;
@end
