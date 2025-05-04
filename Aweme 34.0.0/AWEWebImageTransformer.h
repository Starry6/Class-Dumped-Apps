@interface AWEWebImageTransformer : BDBaseTransformer
@property (nonatomic) <AWEWebImageTransformProtocol> transformer;
- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:;
- (id)transformImageAfterStoreWithImage:;
- (id)transformImageRecoder;
- (BOOL)isAppliedToThumbnail;
- (void)setTransformer:;
- (id)transformer;
- (void).cxx_destruct;
+ (id)transformWithObject:;
@end
