@interface MHSchemaMHAssistantDaemonAudioRecordinFirstBufferReceipt : SISchemaInstrumentationMessage
@property (nonatomic) Q firstBufferReceiptTimeOffsetInNs;
@property (nonatomic) BOOL hasFirstBufferReceiptTimeOffsetInNs;
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
- (void)setFirstBufferReceiptTimeOffsetInNs:;
- (BOOL)hasFirstBufferReceiptTimeOffsetInNs;
- (void)setHasFirstBufferReceiptTimeOffsetInNs:;
- (void)deleteFirstBufferReceiptTimeOffsetInNs;
- (unsigned long long)firstBufferReceiptTimeOffsetInNs;
@end
