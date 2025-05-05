@interface IESLiveVideoLayerUserEnterView : IESLivePrivilegeEntryView
@property (nonatomic) IESLiveEffectPlayerView playerView;
@property (nonatomic) HTSLiveNativeAnimationUserEnterNode node;
@property (nonatomic) BOOL resourceComplete;
- (void)handleTapOnMasks:;
- (void)reportError:node:;
- (void)reportPerformanceWithNode:;
- (BOOL)resourceComplete;
- (void)setResourceComplete:;
- (void)updateWithEnterMessageNode:;
- (void)setPlayerView:;
- (id)node;
- (void)dealloc;
- (id)initWithFrame:;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)playerView;
- (void)endAnimation;
- (void)setNode:;
- (void)setupUI;
@end
