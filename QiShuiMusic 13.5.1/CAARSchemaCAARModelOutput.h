@interface CAARSchemaCAARModelOutput : SISchemaInstrumentationMessage
@property (nonatomic) NSArray actionModelOutputs;
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
- (void)clearActionModelOutputs;
- (void)deleteActionModelOutputs;
- (void)addActionModelOutputs:;
- (unsigned long long)actionModelOutputsCount;
- (id)actionModelOutputsAtIndex:;
- (id)actionModelOutputs;
- (void)setActionModelOutputs:;
@end
