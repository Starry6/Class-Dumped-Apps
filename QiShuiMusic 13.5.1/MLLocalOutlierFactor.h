@interface MLLocalOutlierFactor : MLModel
- (id)parameterValueForKey:error:;
- (id)predictionFromFeatures:options:error:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithKNearestNeighborsModelAtURL:configuration:error:;
- (void)updateToValidDistance:;
- (id)findNearestNeighborsToQueryPoint:;
- (id)findNearestNeighborsToIndex:;
- (float)kDistanceToIndex:;
- (double)localReachabilityDensityOfNeighbors:;
- (double)localReachabilityDensityForIndex:;
- (double)localReachabilityDensityForQeuryPoint:;
- (double)computeLOFForQueryPoint:;
- (id)inputMultiArray:error:;
@end
