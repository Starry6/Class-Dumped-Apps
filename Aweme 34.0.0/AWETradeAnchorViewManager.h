@interface AWETradeAnchorViewManager : AWEBaseAnchorViewManager
@property (nonatomic) AWELocalLifeAnchorModel sourceData;
@property (nonatomic) AWEPOIItemAnchorContentModel anchorContentData;
@property (nonatomic) AWEPOITradeEntryAnchorView entryView;
@property (nonatomic) AWEAnchorIntentionalBehavior intentionalManager;
@property (nonatomic) NSDictionary internalExtraInfo;
@property (nonatomic) @? hotZoneClickBlock;
@property (nonatomic) BOOL needCoverHotZoneClickEvent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)clickMultiAnchorEventHandler:;
- (void)onAnchorClicked:;
- (void)trackAdEventWithLabelName:;
- (id)anchorViewSize;
- (void)updateAnchorExtraInfoWithExtraInfo:;
- (void)triggerAnchorEvent:extraInfo:;
- (void)updateAnchorDataWithDataBuilder:;
- (void)clickHotZoneAnchorEventHandler:needCoverDefaultEvent:;
- (BOOL)canShowSecondInfo;
- (void)trackAdPoiPointShow;
- (void)showAnchorDetailByIntentional;
- (void)anchorBehaviorActionClickWithExtraInfo:;
- (void)anchorBehaviorActionResetWithExtraInfo:;
- (void)anchorBehaviorActionWilShowWithExtraInfo:;
- (void)anchorBehaviorActionSuperViewAppearWithExtraInfo:;
- (void)anchorBehaviorActionSuperViewDisappearWithExtraInfo:;
- (void)videoPlayerBehaviorActionPlayerPeriodChangeWithExtraInfo:;
- (void)videoPlayerBehaviorActionPlayerFinishWithExtraInfo:;
- (void)anchorBehaviorActionSecondInfoExpandWithExtraInfo:;
- (void)anchorBehaviorActionSecondInfoExpandEndWithExtraInfo:;
- (void)anchorBehaviorActionVideoDidEndDisplaying:;
- (void)anchorBehaviorActionViewDidDisappear:;
- (void)anchorBehaviorActionAppDidEnterBackground:;
- (void)trackTradeAdEventWithLabelName:;
- (void)p_updateSourceData;
- (id)anchorContentData;
- (id)internalExtraInfo;
- (void)setHotZoneClickBlock:;
- (void)setNeedCoverHotZoneClickEvent:;
- (void)setInternalExtraInfo:;
- (void)p_tryShowSecondaryInfo;
- (void)setAnchorContentData:;
- (id)hotZoneClickBlock;
- (BOOL)needCoverHotZoneClickEvent;
- (id)intentionalManager;
- (BOOL)p_useNewStyleForFeedIfNeeded;
- (void)setIntentionalManager:;
- (void)p_tradeAnchorRenderTimeTrackWithModel:view:scene:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)entryView;
- (id)anchorView;
- (void)setEntryView:;
- (id)sourceData;
- (void)setSourceData:;
@end
