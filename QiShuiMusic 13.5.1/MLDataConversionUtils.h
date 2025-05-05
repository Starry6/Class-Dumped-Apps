@interface MLDataConversionUtils : NSObject
+ (id)featureProviderFomMLComputeDataProvider:neuralNetworkEngine:options:error:;
+ (unsigned long long)mlComputeDataTypeSize:;
+ (id)batchProviderFromEspressoDataProvider:neuralNetworkEngine:options:error:;
+ (id)espressoDataProviderFromBatchProvider:forPrediction:neuralNetworkEngine:error:;
+ (id)batchProviderFromMLComputeDataProvider:neuralNetworkEngine:options:error:;
+ (unsigned long long)sizeFromShape:;
+ (BOOL)populateEspressoShapeAndStridesFromInputShape:ndRepresentation:espressoShape:espressoStrides:error:;
+ (BOOL)populateShapeAndStrideFor:inputShape:outputShape:outputStrides:error:;
+ (id)featureProviderFromEspressoDataProvider:neuralNetworkEngine:options:error:;
+ (id)stridesForShape:;
+ (id)mlComputeDataProviderFromBatchProvider:batchSize:forPrediction:neuralNetworkEngine:error:;
+ (id)espressoDataProviderFromFeatureProvider:forPrediction:neuralNetworkEngine:error:;
@end
