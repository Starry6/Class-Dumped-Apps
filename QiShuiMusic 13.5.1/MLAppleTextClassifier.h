@interface MLAppleTextClassifier : MLModel
@property (nonatomic) MLAppleTextClassifierParameters parameters;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)predictionFromFeatures:options:error:;
- (id)parameters;
- (void).cxx_destruct;
- (id)initWithParameters:modelDescription:nlpHandle:configuration:error:;
+ (id)loadModelFromSpecification:configuration:error:;
+ (BOOL)saveAppleTextClassifierModelToURL:textClassifierParameters:error:;
@end
