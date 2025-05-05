@interface GEOPDAutocompleteEntryDirectionIntent : PBCodable
@property (nonatomic) BOOL hasDirectionIntent;
@property (nonatomic) GEOPDDirectionIntent directionIntent;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
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
- (BOOL)hasDirectionIntent;
- (id)directionIntent;
- (void)setDirectionIntent:;
+ (BOOL)isValid:;
@end
