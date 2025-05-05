@interface AXMDataRegressionModelPower : AXMDataRegressionModel
- (id)modelDescription;
- (id)modelFunction;
- (int)modelParameterCount;
- (void)getInitialParams:;
- (id)partialDerivatives;
- (id)modelFunctionStringForParameters:significantFigures:;
- (BOOL)dataSatisfiesInitialConditions;
@end
