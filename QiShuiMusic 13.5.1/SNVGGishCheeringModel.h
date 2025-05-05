@interface SNVGGishCheeringModel : NSObject
@property (nonatomic) MLModel model;
- (id)model;
- (id)init;
- (id)predictionFromFeatures:options:error:;
- (id)initWithConfiguration:error:;
- (void).cxx_destruct;
- (id)predictionFromFeatures:error:;
- (id)initWithContentsOfURL:error:;
- (id)initWithMLModel:;
- (id)initWithContentsOfURL:configuration:error:;
- (id)predictionsFromInputs:options:error:;
- (id)predictionFromInput1:error:;
+ (void)loadContentsOfURL:configuration:completionHandler:;
+ (id)URLOfModelInThisBundle;
+ (void)loadWithConfiguration:completionHandler:;
@end
