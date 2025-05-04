@interface AWEPlayInteractionSubtitleController : AWEPlayInteractionNewBaseController
@property (nonatomic) AWEFeedSubtitleContainerView subtitleContainer;
@property (nonatomic) double maxWidth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onPlayer:didChangePlaybackStateWithAction:;
- (void)setHide:;
- (void)onPlayer:onSubtitleInfoCallBack:;
- (BOOL)enableSubtitle;
- (void)changeSubtitleSwitchStatus:;
- (void)changeSubtitleSelectedLanguageID:;
- (BOOL)shouldShowSubtitleView;
- (id)init;
- (void)dealloc;
- (void)prepareForDisplay;
- (double)maxWidth;
- (void)setMaxWidth:;
- (void).cxx_destruct;
- (void)reset;
- (id)playerViewController;
- (void)willDisplay;
- (void)setSubtitleContainer:;
- (id)subtitleContainer;
@end
