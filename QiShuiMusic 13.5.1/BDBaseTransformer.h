@interface BDBaseTransformer : NSObject
- (id)appendingStringForCacheKey;
- (BOOL)isAppliedToThumbnail;
- (id)transformImageAfterStoreWithImage:;
- (id)transformImageBeforeStoreWithImage:;
- (id)transformImageRecoder;
@end
