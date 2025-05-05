@interface MHSchemaMHAssistantDaemonAudioRecordingLastBufferReceipt : SISchemaInstrumentationMessage
@property (nonatomic) Q lastAudioRecordBufferReceiptTimeOffsetInNs;
@property (nonatomic) BOOL hasLastAudioRecordBufferReceiptTimeOffsetInNs;
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
- (void)setLastAudioRecordBufferReceiptTimeOffsetInNs:;
- (BOOL)hasLastAudioRecordBufferReceiptTimeOffsetInNs;
- (void)setHasLastAudioRecordBufferReceiptTimeOffsetInNs:;
- (void)deleteLastAudioRecordBufferReceiptTimeOffsetInNs;
- (unsigned long long)lastAudioRecordBufferReceiptTimeOffsetInNs;
@end
