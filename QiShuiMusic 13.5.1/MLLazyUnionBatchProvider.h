@interface MLLazyUnionBatchProvider : NSObject
@property (nonatomic) <MLBatchProvider> first;
@property (nonatomic) <MLBatchProvider> second;
@property (nonatomic) q count;
- (id)second;
- (id)first;
- (void)setFirst:;
- (void).cxx_destruct;
- (void)setSecond:;
- (long long)count;
- (id)featuresAtIndex:;
- (id)initWithFeaturesFrom:addedToFeaturesFrom:error:;
@end
