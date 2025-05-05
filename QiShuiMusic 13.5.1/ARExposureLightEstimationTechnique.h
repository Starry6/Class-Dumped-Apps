@interface ARExposureLightEstimationTechnique : ARTechnique
@property (nonatomic) BOOL isBusy;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)isBusy;
- (id)processData:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)requestResultDataAtTimestamp:context:;
- (unsigned long long)requiredSensorDataTypes;
@end
