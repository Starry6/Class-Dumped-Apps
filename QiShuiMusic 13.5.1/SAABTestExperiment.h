@interface SAABTestExperiment : AceObject
@property (nonatomic) NSString deploymentId;
@property (nonatomic) NSString experimentId;
@property (nonatomic) NSString treatmentId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)experimentId;
- (id)treatmentId;
- (void)setExperimentId:;
- (id)deploymentId;
- (id)groupIdentifier;
- (void)setDeploymentId:;
- (id)encodedClassName;
- (void)setTreatmentId:;
@end
