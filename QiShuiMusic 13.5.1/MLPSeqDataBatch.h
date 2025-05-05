@interface MLPSeqDataBatch : MLPDataBatch
@property (nonatomic) NSArray matrix;
@property (nonatomic) MLPNDArrayLossLabels combinedLossLabels;
@property (nonatomic) Q labelsCount;
- (void).cxx_destruct;
- (unsigned long long)labelsCount;
- (id)matrix;
- (id)initWithDataBatch:batchSize:network:;
- (void)setMatrix:;
- (id)combinedLossLabels;
- (void)setCombinedLossLabels:;
- (void)setLabelsCount:;
@end
