@interface INFERENCESchemaINFERENCEDisambiguationPromptContext : SISchemaInstrumentationMessage
@property (nonatomic) NSArray anonymizedEntitiesPresenteds;
@property (nonatomic) NSString anonymizedEntitySelected;
@property (nonatomic) BOOL hasAnonymizedEntitySelected;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)clearAnonymizedEntitiesPresented;
- (void)deleteAnonymizedEntitiesPresented;
- (void)addAnonymizedEntitiesPresented:;
- (unsigned long long)anonymizedEntitiesPresentedCount;
- (id)anonymizedEntitiesPresentedAtIndex:;
- (BOOL)hasAnonymizedEntitySelected;
- (void)deleteAnonymizedEntitySelected;
- (id)anonymizedEntitiesPresenteds;
- (void)setAnonymizedEntitiesPresenteds:;
- (id)anonymizedEntitySelected;
- (void)setAnonymizedEntitySelected:;
- (void)setHasAnonymizedEntitySelected:;
@end
