@interface GBDTEvaluator : NSObject
- (id)_makeKeysWithInputVectors:;
- (id)_computePredictionsFromModelWithInputVectors:currentModel:error:;
- (id)_l1NormWithArray:;
- (id)_l2NormWithArray:;
- (id)_sumAbsoluteErrorWithPredictions:targets:;
- (id)_sumAccuratePredictionsWithPredictions:targets:;
- (float)_sigmoidWithValue:;
- (float)_firstOrderGradientWithPrediction:label:;
- (float)_secondOrderGradientWithPrediction:;
- (id)_computeFirstOrderGradientsWithTargets:predictions:positiveSampleWeight:;
- (id)_computeSecondOrderGradientsWithTargets:predictions:positiveSampleWeight:;
- (id)_findNodeSamplesWithDecisionPath:inputVectors:gradients:;
- (id)_computeSumOfGradientsLeftAndRightOfSplitWithFeature:threshold:inputVectors:gradients:;
- (id)_evaluateResultWithGradients:questions:inputVectors:reportGradientsBothSidesOfSplit:reportNodeSumGradients:reportPerFeatureResultDifference:reportPerNodeResultDifference:;
- (id)_weightResultWithWeightVector:result:;
- (id)_translateResultWithTranslateVector:result:;
- (id)_differenceArrayWithArray:;
- (id)evaluateWithModelURL:dataSource:processDataReturnDict:error:;
@end
