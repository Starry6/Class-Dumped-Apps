@interface AWEGenericTemplateApplyStickersHandler : AWEGenericTemplateApplyBaseHandler
@property (nonatomic) <ACCStickerServiceProtocol> stickerService;
@property (nonatomic) <ACCStickerGestureComponentProtocol> stickerGestureComponent;
@property (nonatomic) <ACCSequenceEditServiceProtocol> sequenceEditService;
- (id)sequenceEditService;
- (void)setSequenceEditService:;
- (id)stickerService;
- (void)setStickerService:;
- (id)stickerGestureComponent;
- (void)setStickerGestureComponent:;
- (void)resetPipContainerAtIndex:;
- (void)onWillApplyTemplate:config:targetModel:preprocessParams:;
- (void)onDidApplyTemplate:config:targetModel:trackChangeInfo:error:;
- (void)onTemplateApply:config:didUpdateVideoDataWithTrackChangeInfo:error:;
- (void)onTemplateApplyDidFirstRender:config:;
- (void)onTemplateDidRemoveWithID:config:trackChangeInfo:;
- (void)onTemplateRemovedWithID:config:didUpdateVideoDataWithTrackChangeInfo:error:;
- (void)assignPipContainerAtIndex:workspace:;
- (void).cxx_destruct;
@end
