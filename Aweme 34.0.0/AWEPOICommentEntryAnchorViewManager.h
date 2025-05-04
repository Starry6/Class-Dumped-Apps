@interface AWEPOICommentEntryAnchorViewManager : AWEPOIBaseEntryAnchorViewManager
@property (nonatomic) double maxWidth;
@property (nonatomic) AWEPOIEntryAnchorView entryView;
@property (nonatomic) BOOL userNeverVisitPoiAnchor;
- (id)initWithMaxWidth:;
- (id)aweNearbyModuleService;
- (void)setUserNeverVisitPoiAnchor:;
- (void)trackWillShowOnSuperViewWithContext:;
- (void)trackTradeAdEventWithLabelName:aweme:;
- (void)trackClickWithContext:;
- (void)handlePOITradeClickWithContext:;
- (id)trackParamsForPOIAnchorEntranceWithModel:referString:;
- (BOOL)userNeverVisitPoiAnchor;
- (id)tradeParamsWithContext:;
- (void)handleClickWithContext:;
- (void)handleSetDataWithContext:;
- (void)handleWillShowOnSuperViewWithContext:;
- (id)poiTradeTrackParamsWithContext:;
- (id)commentExtraInfoWithAweme:;
- (void)p_commentAnchorRenderTimeTrackWithModel:view:scene:context:;
- (double)maxWidth;
- (void)setMaxWidth:;
- (void).cxx_destruct;
- (id)entryView;
- (id)anchorView;
- (void)setEntryView:;
@end
