@interface MLComputeBatchDataSource : NSObject
@property (nonatomic) <MLBatchProvider> batchProvider;
@property (nonatomic) MLNeuralNetworkEngine nnEngine;
@property (nonatomic) BOOL useForPrediction;
@property (nonatomic) Q batchSize;
- (unsigned long long)batchSize;
- (void)setBatchSize:;
- (unsigned long long)numberOfBatches;
- (void).cxx_destruct;
- (id)batchAtIndex:error:;
- (unsigned long long)sizeOfBatchAtIndex:;
- (id)initWithBatchProvider:batchSize:forPrediction:neuralNetworkEngine:error:;
- (id)mlcDataSourceAtIndex:error:;
- (id)batchProvider;
- (id)nnEngine;
- (BOOL)useForPrediction;
@end
