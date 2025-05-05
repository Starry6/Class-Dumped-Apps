@interface FLOWSchemaFLOWSmsAudioContext : SISchemaInstrumentationMessage
@property (nonatomic) I messageDurationMs;
@property (nonatomic) BOOL hasMessageDurationMs;
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
- (void)setMessageDurationMs:;
- (BOOL)hasMessageDurationMs;
- (void)setHasMessageDurationMs:;
- (void)deleteMessageDurationMs;
- (unsigned int)messageDurationMs;
@end
