@interface FLOWSchemaFLOWSmsTextContext : SISchemaInstrumentationMessage
@property (nonatomic) FLOWSchemaFLOWSmsTextContentMetadata smsTextContentMetadata;
@property (nonatomic) BOOL hasSmsTextContentMetadata;
@property (nonatomic) FLOWSchemaFLOWSmsAttachmentMetadata smsAttachmentMetadata;
@property (nonatomic) BOOL hasSmsAttachmentMetadata;
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
- (BOOL)hasSmsTextContentMetadata;
- (void)deleteSmsTextContentMetadata;
- (BOOL)hasSmsAttachmentMetadata;
- (void)deleteSmsAttachmentMetadata;
- (id)smsTextContentMetadata;
- (void)setSmsTextContentMetadata:;
- (id)smsAttachmentMetadata;
- (void)setSmsAttachmentMetadata:;
- (void)setHasSmsTextContentMetadata:;
- (void)setHasSmsAttachmentMetadata:;
@end
