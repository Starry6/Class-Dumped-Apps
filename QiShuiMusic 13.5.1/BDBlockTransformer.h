@interface BDBlockTransformer : BDBaseTransformer
@property (nonatomic) @? block;
- (id)appendingStringForCacheKey;
- (BOOL)isAppliedToThumbnail;
- (id)transformImageAfterStoreWithImage:;
- (id)block;
- (void).cxx_destruct;
- (void)setBlock:;
+ (id)transformWithBlock:;
@end
