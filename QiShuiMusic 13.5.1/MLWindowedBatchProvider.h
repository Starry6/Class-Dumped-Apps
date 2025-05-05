@interface MLWindowedBatchProvider : NSObject
@property (nonatomic) <MLBatchProvider> fullBatch;
@property (nonatomic) q startIndex;
@property (nonatomic) q windowLength;
@property (nonatomic) q count;
- (void)setStartIndex:;
- (long long)startIndex;
- (void).cxx_destruct;
- (long long)count;
- (id)featuresAtIndex:;
- (id)initWithBatch:startIndex:windowLength:error:;
- (id)fullBatch;
- (void)setFullBatch:;
- (long long)windowLength;
- (void)setWindowLength:;
@end
