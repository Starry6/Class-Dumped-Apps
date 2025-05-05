@interface PFLivePhotoFrameProcessingRequest : NSObject
@property (nonatomic) CIImage image;
@property (nonatomic) {?=qiIq} time;
@property (nonatomic) q type;
@property (nonatomic) double renderScale;
- (void)setTime:;
- (id)time;
- (void)setType:;
- (void)setImage:;
- (long long)type;
- (void).cxx_destruct;
- (id)image;
- (double)renderScale;
- (void)setRenderScale:;
@end
