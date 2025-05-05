@interface NLXSchemaMARRSMentionResolverEnded : SISchemaInstrumentationMessage
@property (nonatomic) NSArray mentionResolverSpans;
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
- (void)clearMentionResolverSpans;
- (void)deleteMentionResolverSpans;
- (void)addMentionResolverSpans:;
- (unsigned long long)mentionResolverSpansCount;
- (id)mentionResolverSpansAtIndex:;
- (id)mentionResolverSpans;
- (void)setMentionResolverSpans:;
@end
