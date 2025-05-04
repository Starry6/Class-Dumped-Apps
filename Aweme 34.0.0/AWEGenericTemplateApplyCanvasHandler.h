@interface AWEGenericTemplateApplyCanvasHandler : AWEGenericTemplateApplyBaseHandler
@property (nonatomic) <ACCEditorRecoverServiceProtocol> recoverService;
- (id)recoverService;
- (void)setRecoverService:;
- (void)onWillApplyTemplate:config:targetModel:preprocessParams:;
- (void)onDidApplyTemplate:config:targetModel:trackChangeInfo:error:;
- (void)onTemplateApply:config:didUpdateVideoDataWithTrackChangeInfo:error:;
- (void)onTemplateApplyDidFirstRender:config:;
- (void)onTemplateApplyDidSeekToStart:config:;
- (void)onTemplateDidRemoveWithID:config:trackChangeInfo:;
- (void)onTemplateRemovedWithID:config:didUpdateVideoDataWithTrackChangeInfo:error:;
- (void)updateVideoTemplateCanvasForOneClickFilmWithRepository:shouldDoStickersRecover:shouldRemoveEmbeddedSticker:;
- (void)updateVideoTemplateCanvasForSideSlipWithPublishModel:shouldDoStickersRecover:;
- (void).cxx_destruct;
@end
