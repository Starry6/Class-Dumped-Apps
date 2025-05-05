@interface MLAppleSoundAnalysisPreprocessing : MLModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)predictionFromFeatures:options:error:;
- (void).cxx_destruct;
- (id)initWithDescription:configuration:error:;
+ (id)loadModelFromSpecification:configuration:error:;
@end
