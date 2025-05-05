@interface DanceUI.HostingScrollView : UIScrollView
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) {UIEdgeInsets=dddd} safeAreaInsets;
@property (nonatomic) NSArray accessibilityElements;
- (BOOL)danceui_needsDelegateProxy;
- (void)scrollViewDidEndDecelerating:;
- (id)safeAreaInsets;
- (void)setFrame:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)setAccessibilityElements:;
- (id)initWithCoder:;
- (void)scrollViewDidScroll:;
- (id)frame;
- (id)initWithFrame:;
- (void)setBounds:;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)contentSize;
- (void)scrollViewDidEndScrollingAnimation:;
- (id)bounds;
- (void)setContentSize:;
- (void)adjustedContentInsetDidChange;
@end
