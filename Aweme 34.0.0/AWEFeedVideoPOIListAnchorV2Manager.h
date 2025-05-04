@interface AWEFeedVideoPOIListAnchorV2Manager : AWEFeedVideoBaseAnchorV2Manager
- (void)anchorViewWillShowOnSuperview;
- (id)trackerParamsForTemplateAnchorClick;
- (id)trackerParamsForTemplateAnchorShow;
- (BOOL)shouldBusinessInvoke;
- (void)willShowDoubleLineStyleWithType:;
- (id)trackerCommonParamsForTemplateAnchor;
- (void)didShowDoubleLineStyleAnchor;
- (void)handlePlayerPlayedPeriodChanged:;
- (void)handleDidEndDisplaying;
- (void)handleDidDisappear;
- (void)handleAppDidEnterBackground;
- (void)handleAnchorElementLeftInteractionShow;
- (void)handlePlayerPlayedLoopTimes:;
- (void)updateAnchorViewWithViewContext:;
- (void)handlerTemplateAnchorViewClicked:extraInfo:;
- (void)handleUserActionToShowTwoLine;
- (id)initWithViewContext:;
- (void)p_poiListAnchorRenderTimeTrackWithContext:scene:;
- (id)p_createFeedTrackAnchorContext;
- (id)p_createFeedAnchorContext:;
- (id)getCompleteExtraInfoWithExtraInfo:;
- (void)reset;
+ (void)handlePOIListAnchorParams:referString:logExtra:;
@end
