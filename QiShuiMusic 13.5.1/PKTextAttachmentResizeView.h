@interface PKTextAttachmentResizeView : UIView
@property (nonatomic) PKDrawingAdjustmentKnob knobView;
@property (nonatomic) UIView separatorView;
@property (nonatomic) UIView separatorHighlightedView;
@property (nonatomic) <PKTextAttachmentResizeViewDelegate> delegate;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} originalDrawingBounds;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} originalViewBounds;
@property (nonatomic) {UIEdgeInsets=dddd} originalContentInset;
@property (nonatomic) BOOL top;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL shown;
@property (nonatomic) double resizeContentInset;
- (BOOL)enabled;
- (void)layoutSubviews;
- (id)separatorView;
- (BOOL)top;
- (void)setDelegate:;
- (void)handleGesture:;
- (BOOL)highlighted;
- (id)delegate;
- (void)setEnabled:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setHighlighted:;
- (void)setSeparatorView:;
- (id)knobView;
- (void)setKnobView:;
- (void)drawingScrollViewDidScroll:;
- (id)initAtTop:delegate:;
- (double)resizeContentInset;
- (BOOL)shown;
- (void)show:enabled:animated:;
- (void)layoutInsideSuperview;
- (id)originalDrawingBounds;
- (void)setOriginalDrawingBounds:;
- (id)separatorHighlightedView;
- (void)setSeparatorHighlightedView:;
- (id)originalViewBounds;
- (void)setOriginalViewBounds:;
- (id)originalContentInset;
- (void)setOriginalContentInset:;
+ (double)resizeHitSize;
@end
