@interface NLXSchemaMARRSMentionDetectorEndedTier1 : SISchemaInstrumentationMessage
@property (nonatomic) NSArray mentionDetectorSpansTier1s;
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
- (void)clearMentionDetectorSpansTier1;
- (void)deleteMentionDetectorSpansTier1;
- (void)addMentionDetectorSpansTier1:;
- (unsigned long long)mentionDetectorSpansTier1Count;
- (id)mentionDetectorSpansTier1AtIndex:;
- (id)mentionDetectorSpansTier1s;
- (void)setMentionDetectorSpansTier1s:;
@end
