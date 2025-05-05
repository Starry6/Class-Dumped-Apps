@interface IESLiveCommentEntryDanamkuSwitchView : UIView
@property (nonatomic) BOOL isOpened;
@property (nonatomic) IESLiveDanamkuSwitchNoHighlightedButton switchButton;
@property (nonatomic) UIView<IESLiveWebPPlayer> switchAnimationButton;
@property (nonatomic) Q switchStyle;
@property (nonatomic) @? didClicked;
- (void)commentSwitchForOpen:animation:;
- (id)closeWebp;
- (void)commentSwitchAnimationForOpen:;
- (void)commentSwitchForOpen:;
- (void)didClickDanmakuSwitchBtn;
- (id)didClicked;
- (id)initWithSwitchStyle:;
- (id)openWebp;
- (void)resetButtonAccessibility:;
- (void)setDidClicked:;
- (void)setIsOpened:;
- (void)setSwitchAnimationButton:;
- (void)setSwitchButton:;
- (id)switchAnimationButton;
- (void)switchDanmakuButton:animation:;
- (void).cxx_destruct;
- (BOOL)isOpened;
- (void)setSwitchStyle:;
- (unsigned long long)switchStyle;
- (void)setupViews;
- (id)switchButton;
@end
