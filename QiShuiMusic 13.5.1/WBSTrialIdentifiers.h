@interface WBSTrialIdentifiers : NSObject
@property (nonatomic) NSString namespaceName;
@property (nonatomic) NSString experimentId;
@property (nonatomic) NSString treatmentId;
- (id)experimentId;
- (id)treatmentId;
- (void)setExperimentId:;
- (id)namespaceName;
- (void)setNamespaceName:;
- (void).cxx_destruct;
- (void)setTreatmentId:;
@end
