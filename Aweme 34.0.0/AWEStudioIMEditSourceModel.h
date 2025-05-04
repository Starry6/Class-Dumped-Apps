@interface AWEStudioIMEditSourceModel : NSObject
@property (nonatomic) q sourceType;
@property (nonatomic) PHAsset sourcePhAsset;
@property (nonatomic) UIImage image;
@property (nonatomic) AVAsset asset;
@property (nonatomic) NSString livePhotoPairedVideoUrl;
@property (nonatomic) NSString livePhotoPairedImageUrl;
- (void)setLivePhotoPairedImageUrl:;
- (void)setLivePhotoPairedVideoUrl:;
- (id)sourcePhAsset;
- (id)livePhotoPairedVideoUrl;
- (id)livePhotoPairedImageUrl;
- (void)setSourcePhAsset:;
- (void)setSourceType:;
- (long long)sourceType;
- (id)image;
- (void)setImage:;
- (void).cxx_destruct;
- (void)setAsset:;
- (id)asset;
@end
