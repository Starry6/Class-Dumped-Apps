@interface AWEGenericTemplateApplyBaseHandler : NSObject
@property (nonatomic) AWEGenericTemplateApplierContext context;
- (BOOL)isPicTemplate;
- (void)onWillApplyTemplate:config:targetModel:preprocessParams:;
- (void)onDidApplyTemplate:config:targetModel:trackChangeInfo:error:;
- (void)onTemplateApply:config:didUpdateVideoDataWithTrackChangeInfo:error:;
- (void)onTemplateApplyDidFirstRender:config:;
- (void)onTemplateApplyDidSeekToStart:config:;
- (void)onTemplateWillRemoveWithID:config:;
- (void)onTemplateDidRemoveWithID:config:trackChangeInfo:;
- (void)onTemplateRemovedWithID:config:didUpdateVideoDataWithTrackChangeInfo:error:;
- (BOOL)isVideoTemplate;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
