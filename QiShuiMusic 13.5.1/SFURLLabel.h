@interface SFURLLabel : UIVisualEffectView
@property (nonatomic) NSString text;
@property (nonatomic) UIFont font;
@property (nonatomic) UIColor textColor;
@property (nonatomic) NSAttributedString attributedText;
@property (nonatomic) BOOL accessibilityIgnoresInvertColors;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) {CGSize=dd} urlSize;
@property (nonatomic) double baselineOffsetFromBottom;
@property (nonatomic) double lastLineBaselineFrameOriginY;
@property (nonatomic) q textAlignmentEdge;
@property (nonatomic) q fadeOutEdge;
@property (nonatomic) UIView URLContainerClipView;
@property (nonatomic) double labelCapHeightInsetFromTop;
@property (nonatomic) BOOL isAnimatingTextSize;
- (id)init;
- (void)setAttributedText:;
- (id)URLContainerClipView;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (double)lastLineBaselineFrameOriginY;
- (void)setFadeOutEdge:;
- (void)_updateSizeIfNeeded;
- (void)setText:;
- (id)accessibilityLabel;
- (id)urlSize;
- (BOOL)accessibilityIgnoresInvertColors;
- (void)setFont:;
- (void)setAccessibilityIgnoresInvertColors:;
- (double)labelCapHeightInsetFromTop;
- (void)setAdjustsFontForContentSizeCategory:;
- (BOOL)_needsMask;
- (void)endTextSizeAnimation;
- (double)baselineOffsetFromBottom;
- (void)traitCollectionDidChange:;
- (void)setTextColor:;
- (id)sizeThatFits:;
- (void)_setNeedsUpdateSize;
- (void)_updateSize;
- (id)initWithFadeOutDistance:;
- (void).cxx_destruct;
- (void)setTextAlignmentEdge:;
- (id)font;
- (void)_updateMask;
- (id)textColor;
- (id)_unclippedContentRect;
- (long long)textAlignmentEdge;
- (BOOL)adjustsFontForContentSizeCategory;
- (void)beginTextSizeAnimation;
- (BOOL)isAnimatingTextSize;
- (id)attributedText;
- (id)text;
- (long long)fadeOutEdge;
- (void)setURLContainerClipView:;
@end
