@interface AWEUGWidgetSupportService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getWidgetSettingsDictionary;
- (void)setWidgetSettingWithValue:forKey:;
- (void)showAddWidgetGuideViewWithWidgetKey:container:delegate:extraImageURLs:from:;
- (void)showAddWidgetGuideViewWithWidgetKey:container:delegate:extraImageURLs:from:trackParams:;
- (void)showAddWidgetGuideViewWithWidgetKey:container:useMask:delegate:extraImageURLs:from:trackParams:;
- (void)createWidgetGuideViewWithWidgetKey:delegate:extraImageURLs:from:completion:;
- (void)createWidgetGuideViewWithWidgetKey:delegate:extraImageURLs:from:trackParams:completion:;
- (void)refreshWidgetGuideViewLayout:;
- (void)hideCurrentWidgetGuideView;
- (void)setReloadTimelineFlagWithKind:;
- (void)registerWidgetKind:needRefreshType:;
@end
