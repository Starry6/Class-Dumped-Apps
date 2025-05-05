@interface DataSourceTrain : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)dataPointAtIndex:error:;
- (unsigned long long)numberOfDataPoints;
- (void)setVectorsWithProcessor:;
- (id)initWithNumDataPoints:sequenceLength:noiseSize:batchSize:vocabSize:contextKey:targetKey:maskKey:noiseKey:;
- (void)setNumBatches:;
@end
