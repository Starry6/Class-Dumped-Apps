@interface NLXSchemaCDMDelegatedUserDialogActTier1 : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) NSString rewrittenUtterance;
@property (nonatomic) BOOL hasRewrittenUtterance;
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
- (id)rewrittenUtterance;
- (void)setRewrittenUtterance:;
- (void)deleteLinkId;
- (BOOL)hasRewrittenUtterance;
- (void)deleteRewrittenUtterance;
- (void)setHasRewrittenUtterance:;
@end
