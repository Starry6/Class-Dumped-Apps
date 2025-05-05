@interface PSESchemaPSEGenericSignalGenerated : SISchemaInstrumentationMessage
@property (nonatomic) PSESchemaPSECommonSignal commonSignal;
@property (nonatomic) BOOL hasCommonSignal;
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
- (BOOL)hasCommonSignal;
- (void)deleteCommonSignal;
- (id)commonSignal;
- (void)setCommonSignal:;
- (void)setHasCommonSignal:;
@end
