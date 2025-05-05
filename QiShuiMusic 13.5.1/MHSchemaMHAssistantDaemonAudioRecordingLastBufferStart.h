@interface MHSchemaMHAssistantDaemonAudioRecordingLastBufferStart : SISchemaInstrumentationMessage
@property (nonatomic) Q lastAudioRecordBufferStartTimeOffsetInNs;
@property (nonatomic) BOOL hasLastAudioRecordBufferStartTimeOffsetInNs;
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
- (void)setLastAudioRecordBufferStartTimeOffsetInNs:;
- (BOOL)hasLastAudioRecordBufferStartTimeOffsetInNs;
- (void)setHasLastAudioRecordBufferStartTimeOffsetInNs:;
- (void)deleteLastAudioRecordBufferStartTimeOffsetInNs;
- (unsigned long long)lastAudioRecordBufferStartTimeOffsetInNs;
@end
