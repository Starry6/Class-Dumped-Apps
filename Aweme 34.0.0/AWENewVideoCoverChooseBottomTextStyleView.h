@interface AWENewVideoCoverChooseBottomTextStyleView : UIView
@property (nonatomic) AWEStoryColorChooseView colorChooseView;
@property (nonatomic) AWEStoryFontChooseView fontChooseView;
@property (nonatomic) UIButton alignmentButton;
@property (nonatomic) UIButton textStyleButton;
@property (nonatomic) UIView splitLine;
@property (nonatomic) @? didSelectFontBlock;
@property (nonatomic) @? didSelectColorBlock;
@property (nonatomic) @? didSelectAlignStyle;
@property (nonatomic) @? didSelectTextStyle;
@property (nonatomic) @? currentTextModel;
- (id)splitLine;
- (void)setSplitLine:;
- (id)textModel;
- (void)updateTextStyle;
- (id)colorChooseView;
- (id)fontChooseView;
- (void)setColorChooseView:;
- (id)alignmentButton;
- (void)updateTextAlign;
- (id)currentTextModel;
- (id)didSelectAlignStyle;
- (id)didSelectTextStyle;
- (void)didClickToolbarAlignmentButton;
- (void)didClickToolbarTextStyleButton;
- (id)didSelectFontBlock;
- (id)didSelectColorBlock;
- (void)clearStyleSelect;
- (id)currentFontModel;
- (id)currentColorModel;
- (long long)currentAlignStyle;
- (void)updateCurrentStyle:;
- (long long)currentTextStyle;
- (void)setDidSelectFontBlock:;
- (void)setDidSelectColorBlock:;
- (void)setDidSelectAlignStyle:;
- (void)setDidSelectTextStyle:;
- (void)setCurrentTextModel:;
- (void)setFontChooseView:;
- (void)setAlignmentButton:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithFrame:viewModel:;
- (id)textStyleButton;
- (void)setTextStyleButton:;
+ (id)allTextStyles;
@end
