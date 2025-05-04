@interface AWEGenericTemplateApplyFilterHandler : AWEGenericTemplateApplyBaseHandler
@property (nonatomic) <ACCEditVideoFilterServiceProtocol> filterService;
@property (nonatomic) NSNumber isUseNewFilterNum;
- (id)filterService;
- (void)setFilterService:;
- (BOOL)isUseNewFilter;
- (id)isUseNewFilterNum;
- (void)setIsUseNewFilterNum:;
- (void)onWillApplyTemplate:config:targetModel:preprocessParams:;
- (void)onTemplateApply:config:didUpdateVideoDataWithTrackChangeInfo:error:;
- (void)onTemplateDidRemoveWithID:config:trackChangeInfo:;
- (void).cxx_destruct;
@end
