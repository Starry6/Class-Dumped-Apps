@interface FLOWSchemaFLOWWebAnswerExecutionTier1 : SISchemaInstrumentationMessage
@property (nonatomic) NSString answerId;
@property (nonatomic) BOOL hasAnswerId;
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
- (BOOL)hasAnswerId;
- (void)deleteAnswerId;
- (id)answerId;
- (void)setAnswerId:;
- (void)setHasAnswerId:;
@end
