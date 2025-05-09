@interface WKScrollView : UIScrollView
@property (nonatomic) WKWebView<UIScrollViewDelegate> internalDelegate;
@property (nonatomic) BOOL _contentInsetAdjustmentBehaviorWasExternallyOverridden;
- (void)setZoomEnabled:;
- (void)setBackgroundColor:;
- (void)_setContentSizePreservingContentOffsetDuringRubberband:;
- (void)_setScrollEnabledInternal:;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (void)setDelegate:;
- (id)internalDelegate;
- (void)setInternalDelegate:;
- (void)_setContentInsetAdjustmentBehaviorInternal:;
- (void)_adjustForAutomaticKeyboardInfo:animated:lastAdjustment:;
- (void)setContentInsetAdjustmentBehavior:;
- (void)_setBackgroundColorInternal:;
- (void)_setContentScrollInset:;
- (id)initWithFrame:;
- (void)_updateZoomability;
- (void)_setIndicatorStyleInternal:;
- (void)setDecelerationRate:;
- (void)setIndicatorStyle:;
- (void)_setZoomEnabledInternal:;
- (void)_setDecelerationRateInternal:;
- (double)_rubberBandOffsetForOffset:maxOffset:minOffset:range:outside:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_updateContentScrollInset;
- (BOOL)_setContentScrollInsetInternal:;
- (void)setScrollEnabled:;
- (void)setContentInset:;
- (void)_updateDelegate;
- (BOOL)_contentInsetAdjustmentBehaviorWasExternallyOverridden;
- (id)_currentTopLeftRubberbandAmount;
- (id).cxx_construct;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (void)_restoreContentOffsetWithRubberbandAmount:;
- (void)_updateScrollability;
- (id)_systemContentInset;
@end
