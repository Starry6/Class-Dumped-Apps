@interface USOSchemaUSOGraphNodeDataTier1 : SISchemaInstrumentationMessage
@property (nonatomic) USOSchemaUSONodeDataTier1 linkedUsoNodeData;
@property (nonatomic) BOOL hasLinkedUsoNodeData;
@property (nonatomic) NSArray linkedUsoEntityIdentifiers;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasLinkedUsoNodeData;
- (void)deleteLinkedUsoNodeData;
- (void)clearLinkedUsoEntityIdentifiers;
- (void)deleteLinkedUsoEntityIdentifiers;
- (void)addLinkedUsoEntityIdentifiers:;
- (unsigned long long)linkedUsoEntityIdentifiersCount;
- (id)linkedUsoEntityIdentifiersAtIndex:;
- (id)linkedUsoNodeData;
- (void)setLinkedUsoNodeData:;
- (id)linkedUsoEntityIdentifiers;
- (void)setLinkedUsoEntityIdentifiers:;
- (void)setHasLinkedUsoNodeData:;
@end
