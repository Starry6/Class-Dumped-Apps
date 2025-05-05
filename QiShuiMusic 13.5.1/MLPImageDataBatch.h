@interface MLPImageDataBatch : MLPDataBatch
@property (nonatomic) NSArray images;
@property (nonatomic) NSArray lossLabels;
@property (nonatomic) NSArray labels;
- (id)images;
- (id)labels;
- (void).cxx_destruct;
- (void)setImages:;
- (void)setLabels:;
- (id)initWithDataBatch:batchSize:network:;
- (id)lossLabels;
- (void)setLossLabels:;
@end
