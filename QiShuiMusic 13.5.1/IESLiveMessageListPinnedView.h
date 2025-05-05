@interface IESLiveMessageListPinnedView : UIView
@property (nonatomic) UIView pinnedContentView;
@property (nonatomic) @? allAnimationFinished;
@property (nonatomic) IESLivePSComponentConfigModel configModel;
@property (nonatomic) HTSEventContext trackContext;
- (void)appear:;
- (void)setConfigModel:;
- (id)allAnimationFinished;
- (id)configModel;
- (void)disappear:;
- (id)pinnedContentView;
- (void)setAllAnimationFinished:;
- (void)setPinnedContentView:;
- (void)setTrackContext:;
- (id)trackContext;
- (void).cxx_destruct;
@end
