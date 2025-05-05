@interface TTSSchemaTTSRequestReceivedTier1 : SISchemaInstrumentationMessage
@property (nonatomic) NSString textToSynthesize;
@property (nonatomic) BOOL hasTextToSynthesize;
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
- (void)setTextToSynthesize:;
- (void)setHasLinkId:;
- (BOOL)hasLinkId;
- (void)deleteLinkId;
- (BOOL)hasTextToSynthesize;
- (void)deleteTextToSynthesize;
- (id)textToSynthesize;
- (void)setHasTextToSynthesize:;
@end
