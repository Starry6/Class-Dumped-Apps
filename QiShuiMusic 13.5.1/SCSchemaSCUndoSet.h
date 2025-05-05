@interface SCSchemaSCUndoSet : SISchemaInstrumentationMessage
@property (nonatomic) SCSchemaSCSetUndoArgs setUndoArgs;
@property (nonatomic) BOOL hasSetUndoArgs;
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
- (BOOL)hasSetUndoArgs;
- (void)deleteSetUndoArgs;
- (id)setUndoArgs;
- (void)setSetUndoArgs:;
- (void)setHasSetUndoArgs:;
@end
