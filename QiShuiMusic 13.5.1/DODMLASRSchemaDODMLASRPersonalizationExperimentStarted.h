@interface DODMLASRSchemaDODMLASRPersonalizationExperimentStarted : SISchemaInstrumentationMessage
@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (nonatomic) NSInteger deviceThermalState;
@property (nonatomic) BOOL hasDeviceThermalState;
@property (nonatomic) NSData jsonData;
- (BOOL)hasExists;
- (BOOL)exists;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (void)setExists:;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)deleteExists;
- (void)setHasExists:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setDeviceThermalState:;
- (BOOL)hasDeviceThermalState;
- (void)setHasDeviceThermalState:;
- (void)deleteDeviceThermalState;
- (int)deviceThermalState;
@end
