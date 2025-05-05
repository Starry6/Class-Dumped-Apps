@interface IESIMWebImageTransformer : BDBaseTransformer
@property (nonatomic) <IESIMWebImageTransformProtocol> transformer;
- (id)appendingStringForCacheKey;
- (id)transformImageAfterStoreWithImage:;
- (id)transformImageBeforeStoreWithImage:;
- (void)setTransformer:;
- (id)transformer;
- (void).cxx_destruct;
+ (id)transformWithObject:;
@end
