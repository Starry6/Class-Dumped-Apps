@interface AXMDataRegressionModelSine : AXMDataRegressionModel
- (id)modelDescription;
- (id)modelFunction;
- (int)modelParameterCount;
- (void)getInitialParams:;
- (id)partialDerivatives;
- (id)modelFunctionStringForParameters:significantFigures:;
- (void)disqualifyModelIfNecessary;
- (double)estimatedRadianFrequency;
@end
