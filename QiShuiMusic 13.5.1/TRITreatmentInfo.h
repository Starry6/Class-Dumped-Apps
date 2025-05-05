@interface TRITreatmentInfo : NSObject
@property (nonatomic) NSString namespaceName;
@property (nonatomic) NSString treatmentId;
@property (nonatomic) NSString experimentId;
@property (nonatomic) NSInteger deploymentId;
- (id)experimentId;
- (id)treatmentId;
- (BOOL)load;
- (void)setExperimentId:;
- (id)infoDictionary;
- (id)namespaceName;
- (int)deploymentId;
- (id)url;
- (BOOL)save;
- (void)setNamespaceName:;
- (void)setDeploymentId:;
- (id)initWithPaths:;
- (void).cxx_destruct;
- (void)setTreatmentId:;
- (id)_treatmentBasePath;
- (id)baseUrlForTreatmentsWithNamespaceName:;
- (id)baseUrlForTreatment:namespaceName:;
- (id)treatmentDirectory;
- (id)urlWithDir:;
- (BOOL)loadFromUrl:;
- (BOOL)saveToDir:;
- (BOOL)saveToUrl:;
+ (id)loadInfoForTreatment:namespaceName:paths:;
@end
