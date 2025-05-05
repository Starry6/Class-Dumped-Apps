@interface MHSchemaMHAssistantDaemonAudioLateBufferDetected : SISchemaInstrumentationMessage
@property (nonatomic) Q bufferReceiptTimeOffsetInNs;
@property (nonatomic) BOOL hasBufferReceiptTimeOffsetInNs;
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
- (void)setBufferReceiptTimeOffsetInNs:;
- (BOOL)hasBufferReceiptTimeOffsetInNs;
- (void)setHasBufferReceiptTimeOffsetInNs:;
- (void)deleteBufferReceiptTimeOffsetInNs;
- (unsigned long long)bufferReceiptTimeOffsetInNs;
@end
