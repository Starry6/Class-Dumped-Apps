@interface FLOWSchemaFLOWEntityContextTier1 : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) NSArray entitiesPresenteds;
@property (nonatomic) FLOWSchemaFLOWEntityTier1 entitySelected;
@property (nonatomic) BOOL hasEntitySelected;
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
- (void)clearEntitiesPresented;
- (void)deleteEntitiesPresented;
- (void)addEntitiesPresented:;
- (unsigned long long)entitiesPresentedCount;
- (id)entitiesPresentedAtIndex:;
- (BOOL)hasEntitySelected;
- (void)deleteEntitySelected;
- (id)entitiesPresenteds;
- (void)setEntitiesPresenteds:;
- (id)entitySelected;
- (void)setEntitySelected:;
- (void)setHasEntitySelected:;
@end
