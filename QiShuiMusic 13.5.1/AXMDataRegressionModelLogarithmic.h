@interface AXMDataRegressionModelLogarithmic : AXMDataRegressionModel
- (id)modelDescription;
- (id)modelFunction;
- (int)modelParameterCount;
- (void)getInitialParams:;
- (id)partialDerivatives;
- (id)modelFunctionStringForParameters:significantFigures:;
@end
