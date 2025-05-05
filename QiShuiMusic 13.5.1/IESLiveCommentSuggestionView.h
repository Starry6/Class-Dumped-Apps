@interface IESLiveCommentSuggestionView : UIView
@property (nonatomic) IESLiveCommentQuickReplyView quickReplyView;
@property (nonatomic) @? allAnimationFinished;
@property (nonatomic) IESLivePSComponentConfigModel configModel;
@property (nonatomic) HTSEventContext trackContext;
- (void)appear:;
- (void)quickReplyClickWithContentView:;
- (void)setConfigModel:;
- (void)setupWithContents:contentColor:;
- (void)startFoldAnimationWithDuration:;
- (id)allAnimationFinished;
- (id)configModel;
- (void)disappear:;
- (id)quickReplyView;
- (void)refreshLayoutWithLeftMargin:;
- (void)setAllAnimationFinished:;
- (void)setQuickReplyView:;
- (void)setTrackContext:;
- (id)trackContext;
- (void).cxx_destruct;
@end
