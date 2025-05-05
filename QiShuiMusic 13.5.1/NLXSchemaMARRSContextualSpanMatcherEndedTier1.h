@interface NLXSchemaMARRSContextualSpanMatcherEndedTier1 : SISchemaInstrumentationMessage
@property (nonatomic) NSArray contextualSpansTier1s;
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
- (void)clearContextualSpansTier1;
- (void)deleteContextualSpansTier1;
- (void)addContextualSpansTier1:;
- (unsigned long long)contextualSpansTier1Count;
- (id)contextualSpansTier1AtIndex:;
- (id)contextualSpansTier1s;
- (void)setContextualSpansTier1s:;
@end
