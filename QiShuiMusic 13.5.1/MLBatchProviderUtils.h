@interface MLBatchProviderUtils : NSObject
+ (id)featureNamesInBatch:;
+ (id)featureProviderArrayFromBatch:;
+ (id)dictionaryFromBatch:featureNames:;
+ (id)dictionaryFromBatch:;
+ (id)featureValueArrayForName:batch:error:;
+ (id)featureDescriptionsByNameForBatch:error:;
+ (id)lazyBatchWindowIntoBatch:startIndex:windowLength:error:;
+ (id)lazyBatchIndexIntoBatch:indices:error:;
+ (id)lazyBatchWithFeaturesInBatch:addedToBatch:error:;
+ (id)batchFromConcatinatingBatches:;
+ (id)batchWithSubsetOfFeaturesNamed:fromBatch:;
+ (BOOL)vectorizeFeaturesNamed:fromBatch:intoRowsOfDoubleMatrix:error:;
@end
