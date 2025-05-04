@interface AWEIMEmoticonTrackComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMEmoticonPanelSyncComponent> syncComponent;
@property (nonatomic) BOOL trackParamsOpt;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (id)syncComponent;
- (void)setSyncComponent:;
- (BOOL)trackParamsOpt;
- (void)setTrackParamsOpt:;
- (void)trackCurrentEmoticonPanelShowingEmoticons;
- (void)trackSingleEmoticonShowAtIndexPath:emoticonModel:themeModel:trackedEmoticonShowedIDs:;
- (void)trackEmoticonClickAtIndexPath:emoticonModel:themeModel:extraParams:;
- (void)p_trackSingleEmoticonShowAtIndexPath:emoticonModel:themeModel:trackedEmoticonShowedIDs:;
- (id)trackParamsWithEmoticonModel:themeModel:trackedEmoticonShowedIDs:index:;
- (void).cxx_destruct;
@end
