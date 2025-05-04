@interface AWEIMEmoticonPanelHiGiphyCollectionViewCell : AWEIMEmoticonPanelPageCollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) LOTAnimationView liteEmojiAnimationView;
@property (nonatomic) IESIMButton actionButton;
- (void)didEndDisplayingCell;
- (void)p_showAnimation;
- (void)showHiTabAnimation;
- (void)createEmptyViewWithEmptyContentView:;
- (id)liteEmojiAnimationView;
- (void)p_onTouchAction;
- (void)p_showAnimationForPress:completion:;
- (void)setLiteEmojiAnimationView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)actionButton;
- (void)setActionButton:;
- (void)willDisplayCell;
@end
