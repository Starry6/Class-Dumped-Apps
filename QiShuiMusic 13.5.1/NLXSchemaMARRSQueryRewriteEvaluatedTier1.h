@interface NLXSchemaMARRSQueryRewriteEvaluatedTier1 : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) NSArray rewrittenUserUtterances;
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
- (void)clearRewrittenUserUtterances;
- (void)deleteRewrittenUserUtterances;
- (void)addRewrittenUserUtterances:;
- (unsigned long long)rewrittenUserUtterancesCount;
- (id)rewrittenUserUtterancesAtIndex:;
- (id)rewrittenUserUtterances;
- (void)setRewrittenUserUtterances:;
@end
