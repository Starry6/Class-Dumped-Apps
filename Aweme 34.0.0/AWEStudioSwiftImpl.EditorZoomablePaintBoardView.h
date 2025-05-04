@interface AWEStudioSwiftImpl.EditorZoomablePaintBoardView : UIView
- (BOOL)gestureRecognizerShouldBegin:;
- (void)scrollViewDidEndZooming:withView:atScale:;
- (id)viewForZoomingInScrollView:;
- (void)scrollViewDidZoom:;
- (void)scrollViewWillBeginZooming:withView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)tapAction:;
@end
