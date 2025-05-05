@interface STLive.LiveFeedPreviewView : UIView
- (id)feedPreviewView:getCustomDetailViewWithOperationModel:;
- (void)feedPreviewViewDidUserDislike:operationModel:;
- (BOOL)feedPreviewViewIsPreviewing:;
- (void)preview:didChangeLoadState:;
- (void)previewDidEndPlay:;
- (void)previewEnterRoom:;
- (void)p_feedPreviewLongPressWithGesture:;
- (void)p_streamPlayerControlViewDidClickedWithGesture:;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
