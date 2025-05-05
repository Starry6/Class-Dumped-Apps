@interface AWEIMEmoticonHiTabView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) LOTAnimationView liteEmojiAnimationView;
@property (nonatomic) AWEButton actionButton;
@property (nonatomic) @? onClickHiTabView;
- (void)p_onTouchAction;
- (id)liteEmojiAnimationView;
- (id)onClickHiTabView;
- (void)p_setupView;
- (void)p_showAnimationForPress:completion:;
- (void)setLiteEmojiAnimationView:;
- (void)setOnClickHiTabView:;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)actionButton;
- (void)setActionButton:;
- (void)playAnimation;
+ (BOOL)hasShownHiTabGuide;
+ (id)p_key_hiTabGuideShown;
+ (void)setHasShownHiTabGuide;
@end
