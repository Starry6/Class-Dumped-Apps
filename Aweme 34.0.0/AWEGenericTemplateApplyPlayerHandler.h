@interface AWEGenericTemplateApplyPlayerHandler : AWEGenericTemplateApplyBaseHandler
@property (nonatomic) <ACCSequenceEditServiceProtocol> sequenceEditService;
- (id)sequenceEditService;
- (void)setSequenceEditService:;
- (void)onDidApplyTemplate:config:targetModel:trackChangeInfo:error:;
- (void)onTemplateApply:config:didUpdateVideoDataWithTrackChangeInfo:error:;
- (void)onTemplateApplyDidFirstRender:config:;
- (void)onTemplateRemovedWithID:config:didUpdateVideoDataWithTrackChangeInfo:error:;
- (void)refreshMediaContainerView;
- (void).cxx_destruct;
@end
