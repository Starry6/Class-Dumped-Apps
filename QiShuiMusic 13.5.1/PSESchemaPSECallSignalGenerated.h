@interface PSESchemaPSECallSignalGenerated : SISchemaInstrumentationMessage
@property (nonatomic) PSESchemaPSECommonSignal commonSignal;
@property (nonatomic) BOOL hasCommonSignal;
@property (nonatomic) PSESchemaPSECall callSignal;
@property (nonatomic) BOOL hasCallSignal;
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
- (BOOL)hasCallSignal;
- (void)deleteCallSignal;
- (id)commonSignal;
- (void)setCommonSignal:;
- (id)callSignal;
- (void)setCallSignal:;
- (void)setHasCommonSignal:;
- (void)setHasCallSignal:;
@end
