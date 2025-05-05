@interface CNVSchemaCNVIntentEagerExecutionFailed : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger reason;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (int)reason;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setReason:;
- (BOOL)hasReason;
- (void)setHasReason:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteReason;
@end
