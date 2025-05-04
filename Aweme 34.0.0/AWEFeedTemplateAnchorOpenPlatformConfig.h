@interface AWEFeedTemplateAnchorOpenPlatformConfig : AWEFeedTemplateAnchorBaseConfig
@property (nonatomic) AWEDetailManager detailManager;
- (void)anchorViewWillShowOnSuperview;
- (void)handlerTemplateAnchorViewClicked;
- (id)trackerParamsForTemplateAnchorClick;
- (id)trackerParamsForTemplateAnchorShow;
- (id)trackerCommonParamsForTemplateAnchor;
- (void)updateWithAwemeModel:needPerformOnDisplay:;
- (id)preferedURL;
- (id)openPlatformEventInfo;
- (id)preferedNewURL;
- (id)preferedName;
- (id)detailManager;
- (void)setDetailManager:;
- (id)templateID;
- (void).cxx_destruct;
- (id)trackInfo;
+ (BOOL)shouldShowAnchor:;
@end
