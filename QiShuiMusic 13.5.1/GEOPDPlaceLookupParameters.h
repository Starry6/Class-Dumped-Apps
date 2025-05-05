@interface GEOPDPlaceLookupParameters : PBCodable
@property (nonatomic) NSMutableArray identifiers;
- (id)init;
- (void)dealloc;
- (id)identifiers;
- (id)jsonRepresentation;
- (void)writeTo:;
- (void)addIdentifier:;
- (unsigned long long)hash;
- (id)initWithData:;
- (void)setIdentifiers:;
- (void).cxx_destruct;
- (id)initWithIdentifiers:resultProviderID:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearIdentifiers;
- (unsigned long long)identifiersCount;
- (id)identifierAtIndex:;
+ (Class)identifierType;
@end
