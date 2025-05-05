@interface MLShufflingBatchProvider : NSObject
@property (nonatomic) <MLBatchProvider> batchProvider;
@property (nonatomic) q count;
- (void).cxx_destruct;
- (long long)count;
- (id).cxx_construct;
- (void)shuffle;
- (id)featuresAtIndex:;
- (id)batchProvider;
- (id)initWithBatchProvider:seed:;
- (void)setBatchProvider:;
@end
