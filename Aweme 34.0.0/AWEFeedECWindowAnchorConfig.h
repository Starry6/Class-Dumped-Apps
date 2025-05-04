@interface AWEFeedECWindowAnchorConfig : AWEFeedTemplateAnchorBaseConfig
@property (nonatomic) BOOL shouldTrackDetailShowWhenAnchorViewShow;
- (void)anchorViewWillShowOnSuperview;
- (void)handlerTemplateAnchorViewClicked;
- (void)willShowDoubleLineStyleWithType:;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (void)didShowDoubleLineStyleAnchor;
- (BOOL)shouldTrackDetailShowWhenAnchorViewShow;
- (void)setShouldTrackDetailShowWhenAnchorViewShow:;
- (void)trackShowWindowAnchor;
- (void)trackShowWindowAnchorDetail;
- (void)handleAnchorViewClicked;
- (void)trackClickWindowAnchor;
- (id)hostViewController;
@end
