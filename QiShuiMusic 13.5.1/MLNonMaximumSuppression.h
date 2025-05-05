@interface MLNonMaximumSuppression : MLModel
@property (nonatomic) MLNonMaximumSuppressionParameters parameters;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)predictionFromFeatures:options:error:;
- (id)parameters;
- (void).cxx_destruct;
- (id)initWithParameters:modelDescription:configuration:error:;
+ (id)loadModelFromSpecification:configuration:error:;
@end
