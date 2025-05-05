@interface POMMESSchemaPOMMESDebugPerformanceReported : SISchemaInstrumentationMessage
@property (nonatomic) NSArray performanceMeasurements;
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
- (void)clearPerformanceMeasurements;
- (void)deletePerformanceMeasurements;
- (void)addPerformanceMeasurements:;
- (unsigned long long)performanceMeasurementsCount;
- (id)performanceMeasurementsAtIndex:;
- (id)performanceMeasurements;
- (void)setPerformanceMeasurements:;
@end
