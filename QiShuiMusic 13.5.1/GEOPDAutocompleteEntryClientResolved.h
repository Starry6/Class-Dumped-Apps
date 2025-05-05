@interface GEOPDAutocompleteEntryClientResolved : PBCodable
@property (nonatomic) BOOL hasResolvedItemType;
@property (nonatomic) NSInteger resolvedItemType;
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
- (int)resolvedItemType;
- (void)setResolvedItemType:;
- (void)setHasResolvedItemType:;
- (BOOL)hasResolvedItemType;
- (id)resolvedItemTypeAsString:;
- (int)StringAsResolvedItemType:;
+ (BOOL)isValid:;
@end
