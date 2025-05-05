@interface INFERENCESchemaINFERENCEResolutionRequestStarted : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger slotType;
@property (nonatomic) BOOL hasSlotType;
@property (nonatomic) INFERENCESchemaINFERENCEResolverConfig resolverConfig;
@property (nonatomic) BOOL hasResolverConfig;
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
- (BOOL)hasResolverConfig;
- (void)deleteResolverConfig;
- (id)resolverConfig;
- (void)setResolverConfig:;
- (void)setHasResolverConfig:;
- (void)setSlotType:;
- (BOOL)hasSlotType;
- (void)setHasSlotType:;
- (void)deleteSlotType;
- (int)slotType;
@end
