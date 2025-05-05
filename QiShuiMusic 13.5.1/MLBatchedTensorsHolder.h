@interface MLBatchedTensorsHolder : NSObject
@property (nonatomic) NSDictionary batchedTensors;
@property (nonatomic) Q numberOfTensors;
- (void).cxx_destruct;
- (id)initWithBatchedTensors:numberOfTensors:;
- (id)batchedTensors;
- (unsigned long long)numberOfTensors;
@end
