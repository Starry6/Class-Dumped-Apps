@interface AWEIMImageTransformer : BDBaseTransformer
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) double imageCornerRadius;
- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:;
- (id)initWithSize:cornerRadius:;
- (void)setImageSize:;
- (id)imageSize;
- (double)imageCornerRadius;
- (void)setImageCornerRadius:;
@end
