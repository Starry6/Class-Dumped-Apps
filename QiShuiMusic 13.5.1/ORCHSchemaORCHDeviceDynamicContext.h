@interface ORCHSchemaORCHDeviceDynamicContext : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger thermalState;
@property (nonatomic) BOOL hasThermalState;
@property (nonatomic) NSInteger motionActivity;
@property (nonatomic) BOOL hasMotionActivity;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (int)motionActivity;
- (void)setMotionActivity:;
- (BOOL)hasMotionActivity;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (int)thermalState;
- (void)setThermalState:;
- (BOOL)hasThermalState;
- (void)setHasThermalState:;
- (void)deleteThermalState;
- (void)setHasMotionActivity:;
- (void)deleteMotionActivity;
@end
