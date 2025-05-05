@interface AXMDataRegressionModelLinear : AXMDataRegressionModel
@property (nonatomic) double rSquared;
- (id)modelDescription;
- (id)modelFunction;
- (int)modelParameterCount;
- (void)getInitialParams:;
- (id)partialDerivatives;
- (id)modelFunctionStringForParameters:significantFigures:;
- (double)rSquared;
- (double)fitDataWithModelParams:finalParams:;
@end
