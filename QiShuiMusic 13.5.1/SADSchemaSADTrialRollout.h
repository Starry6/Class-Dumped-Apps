@interface SADSchemaSADTrialRollout : SISchemaInstrumentationMessage
@property (nonatomic) NSString rolloutId;
@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) I deployment;
@property (nonatomic) BOOL hasDeployment;
@property (nonatomic) NSString factorPack;
@property (nonatomic) BOOL hasFactorPack;
@property (nonatomic) NSData jsonData;
- (unsigned int)deployment;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (id)rolloutId;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (BOOL)hasRolloutId;
- (void)setFactorPack:;
- (void)setRolloutId:;
- (id)factorPack;
- (BOOL)hasFactorPack;
- (void)deleteRolloutId;
- (void)setHasRolloutId:;
- (void)setDeployment:;
- (BOOL)hasDeployment;
- (void)setHasDeployment:;
- (void)deleteDeployment;
- (void)deleteFactorPack;
- (void)setHasFactorPack:;
@end
