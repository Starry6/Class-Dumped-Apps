@interface FLOWSchemaFLOWEntityContext : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) I numberOfEntitiesShown;
@property (nonatomic) BOOL hasNumberOfEntitiesShown;
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
- (void)setNumberOfEntitiesShown:;
- (BOOL)hasNumberOfEntitiesShown;
- (void)setHasNumberOfEntitiesShown:;
- (void)deleteNumberOfEntitiesShown;
- (unsigned int)numberOfEntitiesShown;
@end
