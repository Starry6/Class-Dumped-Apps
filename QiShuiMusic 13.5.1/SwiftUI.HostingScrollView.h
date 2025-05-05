@interface SwiftUI.HostingScrollView : UIKitScrollViewBase
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) {UIEdgeInsets=dddd} safeAreaInsets;
@property (nonatomic) BOOL _shouldScrollToContentBeginningInRightToLeft;
- (void)scrollViewDidEndDecelerating:;
- (id)safeAreaInsets;
- (void)setContentOffset:animated:;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)scrollViewWillBeginDragging:;
- (BOOL)scrollViewShouldScrollToTop:;
- (void)setBounds:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_updateCycleIdleUntil:;
- (void)scrollViewWillEndDragging:withVelocity:targetContentOffset:;
- (BOOL)_shouldScrollToContentBeginningInRightToLeft;
- (void)_swiftui_focusedItem:isMinX:isMaxX:isMinY:isMaxY:;
- (void)scrollViewDidEndScrollingAnimation:;
- (id)bounds;
- (void)adjustedContentInsetDidChange;
- (void)safeAreaInsetsDidChange;
@end
