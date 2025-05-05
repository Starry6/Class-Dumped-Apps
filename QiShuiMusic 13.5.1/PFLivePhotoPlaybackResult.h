@interface PFLivePhotoPlaybackResult : NSObject
@property (nonatomic) ^{CGImage=} photo;
@property (nonatomic) NSInteger photoExifOrientation;
@property (nonatomic) {?=qiIq} photoTime;
@property (nonatomic) AVAsset videoAsset;
- (void)dealloc;
- (void).cxx_destruct;
- (id)photo;
- (void)setPhoto:;
- (int)photoExifOrientation;
- (id)videoAsset;
- (id)photoTime;
- (void)setPhotoExifOrientation:;
- (void)setPhotoTime:;
- (void)setVideoAsset:;
@end
