@interface AWEIMImageRoundCornerTransformer : BDBaseTransformer
@property (nonatomic) double roundCornerRatio;
- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:;
- (void)setRoundCornerRatio:;
- (double)roundCornerRatio;
- (id)__cropToSquareImageIfNecessaryWithOriginalImage:;
- (id)initWithRoundCornerRatio:;
+ (BOOL)enableCropUnexpectedSize;
+ (BOOL)enableTrackUnexpectedSize;
@end
