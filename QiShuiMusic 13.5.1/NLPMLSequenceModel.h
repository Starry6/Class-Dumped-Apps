@interface NLPMLSequenceModel : NLModel
@property (nonatomic) MLModelDescription modelDescription;
- (id)predictionFromFeatures:options:error:;
- (id)modelDescription;
- (void).cxx_destruct;
- (id)initWithModelDescription:parameterDictionary:error:;
@end
