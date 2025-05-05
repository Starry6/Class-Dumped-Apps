@interface CNVSchemaCNVIntentEagerExecutionCancelled : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger cancellationReason;
@property (nonatomic) BOOL hasCancellationReason;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (int)cancellationReason;
- (void)setCancellationReason:;
- (BOOL)hasCancellationReason;
- (void)setHasCancellationReason:;
- (void)deleteCancellationReason;
@end
