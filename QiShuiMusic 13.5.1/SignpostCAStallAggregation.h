@interface SignpostCAStallAggregation : NSObject
@property (nonatomic) SignpostCAProcessStallAggregation systemAggregation;
@property (nonatomic) NSDictionary executablePathToStallAggregation;
- (id)init;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (void)_addSystemDuration:ofType:;
- (void)_addDuration:ofType:procExecutablePath:responsiblePID:aggregateForSystem:;
- (id)systemAggregation;
- (id)executablePathToStallAggregation;
@end
