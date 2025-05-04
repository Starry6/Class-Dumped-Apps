@interface AWEImageTextPinchZoomController : AWEBaseController
- (void)trackPinchZoomWithZoomType:;
- (void)setCurrentImageZoomWithInfo:animated:completion:;
- (void)zoomCurrentImageToRatioRect:scale:animated:;
- (id)getCurrentImageZoomInfoWrapper;
- (id)init;
@end
