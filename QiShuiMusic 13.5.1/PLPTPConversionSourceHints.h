@interface PLPTPConversionSourceHints : NSObject
@property (nonatomic) BOOL isVideo;
@property (nonatomic) BOOL isRender;
@property (nonatomic) BOOL isLivePhoto;
@property (nonatomic) BOOL livePhotoImageIsHEIC;
- (BOOL)isVideo;
- (void).cxx_destruct;
- (BOOL)isLivePhoto;
- (BOOL)isRender;
- (id)initWithAsset:isVideo:isRender:;
- (BOOL)livePhotoImageIsHEIC;
+ (id)hintsForAsset:isVideo:isRender:;
@end
