@interface GEOPDPlacecardLayoutConfiguration : PBCodable
@property (nonatomic) NSMutableArray entries;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)setEntries:;
- (void)readAll:;
- (id)unknownFields;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (void)addEntries:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (id)entries;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearEntries;
- (unsigned long long)entriesCount;
- (id)entriesAtIndex:;
+ (BOOL)isValid:;
+ (id)placecardLayoutConfigurationPlaceData:;
+ (Class)entriesType;
@end
