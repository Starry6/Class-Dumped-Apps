@interface MDLMaterialPropertyNode : NSObject
@property (nonatomic) @? evaluationFunction;
@property (nonatomic) NSArray inputs;
@property (nonatomic) NSArray outputs;
@property (nonatomic) NSString name;
- (id)inputs;
- (void)setName:;
- (id)outputs;
- (void).cxx_destruct;
- (id)name;
- (id)initWithInputs:outputs:evaluationFunction:;
- (id)evaluationFunction;
- (void)setEvaluationFunction:;
@end
