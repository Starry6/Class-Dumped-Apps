@interface AWEImageTextZoomPinchComponent : AWEImageTextBaseComponent
- (void)trackPinchZoomWithZoomType:;
- (void)zoomCurrentImageToRatioRect:scale:animated:;
- (id)getCurrentImageZoomInfoWrapper;
- (void)setCurrentImageZoomWrapperWithInfo:animated:completion:;
- (void)didBindSectionViewModel;
- (void)zoomScrollViewWillBeginZooming;
- (void)zoomScrollViewDidEndZooming;
- (id)registerProtocol;
- (id)init;
- (void).cxx_destruct;
- (id)initWithManager:;
@end
