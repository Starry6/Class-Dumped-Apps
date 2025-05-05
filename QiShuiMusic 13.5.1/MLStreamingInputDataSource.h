@interface MLStreamingInputDataSource : NSObject
@property (nonatomic) Q batchSize;
@property (nonatomic) NSMutableArray dataSources;
- (id)dataSources;
- (unsigned long long)batchSize;
- (void)setBatchSize:;
- (void)setDataSources:;
- (unsigned long long)numberOfBatches;
- (void).cxx_destruct;
- (id)batchAtIndex:error:;
- (unsigned long long)sizeOfBatchAtIndex:;
- (id)initWithBatchSize:;
- (void)appendBatchedTensors:numberOfTensors:;
@end
