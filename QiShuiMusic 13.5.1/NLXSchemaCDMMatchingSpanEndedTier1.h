@interface NLXSchemaCDMMatchingSpanEndedTier1 : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) NSArray matchingSpans;
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
- (id)matchingSpans;
- (void)setMatchingSpans:;
- (void)deleteLinkId;
- (void)clearMatchingSpans;
- (void)deleteMatchingSpans;
- (void)addMatchingSpans:;
- (unsigned long long)matchingSpansCount;
- (id)matchingSpansAtIndex:;
@end
