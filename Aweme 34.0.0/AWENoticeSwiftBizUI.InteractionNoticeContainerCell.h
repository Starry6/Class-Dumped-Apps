@interface AWENoticeSwiftBizUI.InteractionNoticeContainerCell : UICollectionViewCell
@property (nonatomic) Q accessibilityTraits;
@property (nonatomic) NSString accessibilityHint;
@property (nonatomic) NSString accessibilityLabel;
@property (nonatomic) BOOL highlighted;
- (BOOL)gestureRecognizerShouldBegin:;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)awe_themeReload;
- (void)innerEndEditingStateIfNeededWithGestureRecognizer:;
- (void)innerEndOtherEditingStateWithGestureRecognizer:;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (void)prepareForReuse;
- (BOOL)isHighlighted;
- (id)initWithFrame:;
- (void)setAccessibilityLabel:;
- (void)setHighlighted:;
- (void)setAccessibilityTraits:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (unsigned long long)accessibilityTraits;
- (void)setAccessibilityHint:;
- (id)initWithCoder:;
- (BOOL)accessibilityPerformMagicTap;
@end
