@interface VEVideoFetchAsset : NSObject
@property (nonatomic) AVAsset asset;
@property (nonatomic) AVVideoComposition videoCompostion;
@property (nonatomic) {?=qiIq} assetDuration;
@property (nonatomic) q totalDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)videoCompostion;
- (id)assetDuration;
- (void)asynFetchImageWithBound:pts:effectPts:completeBlock:;
- (id)fetchImageWithBound:pts:;
- (id)initWithAsset:videoCompostion:;
- (void)setAssetDuration:;
- (void)setVideoCompostion:;
- (id)asset;
- (long long)totalDuration;
- (void).cxx_destruct;
- (void)setAsset:;
@end
