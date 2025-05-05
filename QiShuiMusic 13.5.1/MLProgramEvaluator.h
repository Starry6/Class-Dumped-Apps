@interface MLProgramEvaluator : NSObject
@property (nonatomic) <MLProgramInternal> program;
@property (nonatomic) <MLModeling> model;
- (id)model;
- (void).cxx_destruct;
- (id)program;
- (void)setProgram:;
- (id)newContextAndReturnError:;
- (id)initWithProgram:error:;
- (void)updateContext:functionName:result:;
- (id)prepareArgumentsFromFeatures:context:forFunctionName:;
- (id)evaluateFunction:arguments:context:updateContext:error:;
- (id)evaluateFunction:arguments:context:error:;
@end
