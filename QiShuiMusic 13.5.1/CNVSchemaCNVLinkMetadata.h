@interface CNVSchemaCNVLinkMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) NSString linkActionId;
@property (nonatomic) BOOL hasLinkActionId;
@property (nonatomic) NSInteger systemProtocol;
@property (nonatomic) BOOL hasSystemProtocol;
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
- (int)systemProtocol;
- (void)deleteLinkId;
- (BOOL)hasLinkActionId;
- (void)deleteLinkActionId;
- (void)setSystemProtocol:;
- (BOOL)hasSystemProtocol;
- (void)setHasSystemProtocol:;
- (void)deleteSystemProtocol;
- (id)linkActionId;
- (void)setLinkActionId:;
- (void)setHasLinkActionId:;
@end
