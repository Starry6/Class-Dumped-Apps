@interface UIMorphingLabel : UIView
@property (nonatomic) NSString text;
@property (nonatomic) UIFont font;
@property (nonatomic) UIColor textColor;
@property (nonatomic) q textAlignment;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} visibleRect;
@property (nonatomic) BOOL suppressLayoutSubviews;
@property (nonatomic) BOOL enableAnimation;
@property (nonatomic) double initialScale;
@property (nonatomic) double glyphScaleAnimationSpeed;
@property (nonatomic) double rippleDuration;
- (BOOL)_isRTL;
- (void)setVisibleRect:;
- (void)animateDeletionAlignmentHunkAtIndex:;
- (void)animateInsertionAlignmentHunkAtIndex:;
- (id)visibleRect;
- (void)layoutSubviews;
- (id)attributedStringForText:;
- (void)initAlignmentHunkAtIndex:;
- (void)setText:;
- (id)uniqueString;
- (double)totalRightOffsetForAlignmentHunkAtIndex:;
- (double)_rippleDurationForEndInsertion:;
- (void)baseInit;
- (id)dstRangeOfAlignmentHunkAtIndex:;
- (void)setFont:;
- (void)hideGlyph:;
- (void)animateGlyph:toAlpha:duration:delay:;
- (void)animateShowGlyph:alpha:alphaDuration:delay:;
- (void)animateGlyphs;
- (double)requiredWidthForText:;
- (void)setGlyphScaleAnimationSpeed:;
- (void)contentSizeDidChange:;
- (id)initWithCoder:;
- (id)attributedString;
- (void)animateGlyph:toPosition:delay:;
- (double)initialScale;
- (void)calculateGlyphAlignment;
- (void)animateHideGlyph:alphaDuration:delay:;
- (unsigned long long)calculateHardAlignmentAtIndex:fromGlyphsInRange:toGlyphsInRange:;
- (double)glyphScaleAnimationSpeed;
- (BOOL)suppressLayoutSubviews;
- (id)initWithFrame:;
- (void)initInsertionAlignmentHunkAtIndex:;
- (void)setTextColor:;
- (void)initDeletionAlignmentHunkAtIndex:;
- (void)setRippleDuration:;
- (void)setEnableAnimation:;
- (id)srcRangeOfAlignmentHunkAtIndex:;
- (double)totalLeftOffsetForAlignmentHunkAtIndex:;
- (void)animateMovementAlignmentHunkAtIndex:;
- (double)alphaForFrame:;
- (void)animateShowGlyph:alphaDuration:delay:;
- (void).cxx_destruct;
- (double)changeInWidthDueToAlignmentHunkAtIndex:;
- (id)font;
- (void)animateSubstitutionAlignmentHunkAtIndex:;
- (double)rippleDuration;
- (id)textColor;
- (void)initMovementAlignmentHunkAtIndex:;
- (void)setInitialScale:;
- (BOOL)canFitText:;
- (long long)textAlignment;
- (void)animateChangeInWidthOutsideAlignmentHunkAtIndex:;
- (void)setTextAlignment:;
- (double)flushAmount;
- (void)setSuppressLayoutSubviews:;
- (void)animateGlyphsInRange:ofGlyphSet:byOffset:delay:;
- (BOOL)enableAnimation;
- (void)initSubstitutionAlignmentHunkAtIndex:;
- (void)animateGlyph:toScale:delay:;
- (id)text;
- (double)currentMediaTime;
- (void)animateAlignmentHunkAtIndex:;
- (id)glyphViewWithImage:isColorGlyph:;
- (void)copyStateFromGlyph:toGlyph:;
+ (id)preferredFontWithSize:;
@end
