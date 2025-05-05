@interface ASRSchemaASRJitLanguageModelEnrollmentEndedTier1 : SISchemaInstrumentationMessage
@property (nonatomic) NSArray dialogContexts;
@property (nonatomic) SISchemaUUID linkId;
@property (nonatomic) BOOL hasLinkId;
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
- (id)linkId;
- (void)setLinkId:;
- (void)setHasLinkId:;
- (BOOL)hasLinkId;
- (void)deleteLinkId;
- (void)clearDialogContext;
- (void)deleteDialogContext;
- (void)addDialogContext:;
- (unsigned long long)dialogContextCount;
- (id)dialogContextAtIndex:;
- (id)dialogContexts;
- (void)setDialogContexts:;
@end
