@interface CRTextDetectorModelOutput : NSObject
@property (nonatomic) MLMultiArray f_score_act_sigmoid_output;
@property (nonatomic) MLMultiArray geometry_output;
@property (nonatomic) NSSet featureNames;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)initWithF_score_act_sigmoid_output:geometry_output:;
- (id)f_score_act_sigmoid_output;
- (void)setF_score_act_sigmoid_output:;
- (id)geometry_output;
- (void)setGeometry_output:;
@end
