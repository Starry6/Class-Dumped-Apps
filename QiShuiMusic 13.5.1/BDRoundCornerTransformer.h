@interface BDRoundCornerTransformer : BDBaseTransformer
@property (nonatomic) Q imageSize;
@property (nonatomic) double borderWidth;
@property (nonatomic) UIColor borderColor;
- (id)appendingStringForCacheKey;
- (BOOL)isAppliedToThumbnail;
- (id)transformImageBeforeStoreWithImage:;
- (void)setBorderColor:;
- (id)borderColor;
- (unsigned long long)imageSize;
- (double)borderWidth;
- (void)setBorderWidth:;
- (void).cxx_destruct;
- (void)setImageSize:;
+ (id)defaultTransformer;
+ (id)transformerMap;
+ (id)transformerWithImageSize:;
+ (id)transformerWithImageSize:borderWidth:borderColor:;
@end
