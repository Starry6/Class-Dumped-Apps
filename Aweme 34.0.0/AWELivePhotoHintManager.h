@interface AWELivePhotoHintManager : NSObject
@property (nonatomic) AWELivePhotoHintView livePhotoHint;
@property (nonatomic) AWELivePhotoHintView zoomScaleHintView;
- (void)removeZoomScaleHintView;
- (void)showLivePhotoHintWithContainer:livePhotoName:;
- (id)livePhotoHint;
- (void)setLivePhotoHint:;
- (id)zoomScaleHintView;
- (void)removeLivePhotoHint;
- (void)setZoomScaleHintView:;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
