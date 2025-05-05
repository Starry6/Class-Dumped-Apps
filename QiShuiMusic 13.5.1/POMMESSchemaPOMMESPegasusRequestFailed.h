@interface POMMESSchemaPOMMESPegasusRequestFailed : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger reason;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) POMMESSchemaPOMMESPegasusRequestArguments requestArguments;
@property (nonatomic) BOOL hasRequestArguments;
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
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)deleteReason;
- (BOOL)hasRequestArguments;
- (void)deleteRequestArguments;
- (id)requestArguments;
- (void)setRequestArguments:;
- (void)setHasRequestArguments:;
@end
