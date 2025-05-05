@interface NLXSchemaMARRSContextualSpanMatcherEnded : SISchemaInstrumentationMessage
@property (nonatomic) NSArray contextualSpans;
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
- (void)clearContextualSpans;
- (void)deleteContextualSpans;
- (void)addContextualSpans:;
- (unsigned long long)contextualSpansCount;
- (id)contextualSpansAtIndex:;
- (id)contextualSpans;
- (void)setContextualSpans:;
@end
