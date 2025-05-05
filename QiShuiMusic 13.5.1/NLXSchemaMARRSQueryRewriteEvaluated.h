@interface NLXSchemaMARRSQueryRewriteEvaluated : SISchemaInstrumentationMessage
@property (nonatomic) NSArray queryRewriteHypotheses;
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
- (void)clearQueryRewriteHypotheses;
- (void)deleteQueryRewriteHypotheses;
- (void)addQueryRewriteHypotheses:;
- (unsigned long long)queryRewriteHypothesesCount;
- (id)queryRewriteHypothesesAtIndex:;
- (id)queryRewriteHypotheses;
- (void)setQueryRewriteHypotheses:;
@end
