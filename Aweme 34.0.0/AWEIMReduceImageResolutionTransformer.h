@interface AWEIMReduceImageResolutionTransformer : BDBaseTransformer
@property (nonatomic) {CGSize=dd} limitImageSize;
@property (nonatomic) double rate;
- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:;
- (id)limitImageSize;
- (id)initWithSize:rate:;
- (void)setLimitImageSize:;
- (void)setRate:;
- (double)rate;
@end
