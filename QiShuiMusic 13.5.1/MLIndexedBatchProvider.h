@interface MLIndexedBatchProvider : NSObject
@property (nonatomic) <MLBatchProvider> fullBatch;
@property (nonatomic) NSArray indices;
@property (nonatomic) q count;
- (id)indices;
- (void).cxx_destruct;
- (long long)count;
- (id)featuresAtIndex:;
- (id)fullBatch;
- (void)setFullBatch:;
- (id)initWithBatch:indices:error:;
- (void)setIndices:;
@end
