@interface VEImageFetchAsset : NSObject
@property (nonatomic) ^^{__CVBuffer} pixelCache;
@property (nonatomic) <VEImageFetchAssetDelegate> delegate;
@property (nonatomic) {CGSize=dd} previewBounds;
@property (nonatomic) NSArray images;
@property (nonatomic) q totalDuration;
@property (nonatomic) q fps;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)asynFetchImageWithBound:pts:effectPts:completeBlock:;
- (id)fetchImageWithBound:pts:;
- (id)fetchPreviewImageWithPts:;
- (id)initWithImagesPreviewBoundSize:images:framerate:;
- (id)pixelCache;
- (void)setPixelCache:;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)images;
- (long long)totalDuration;
- (id)delegate;
- (void).cxx_destruct;
- (long long)fps;
- (void)setFps:;
- (void)updateImages:;
- (id)previewBounds;
@end
