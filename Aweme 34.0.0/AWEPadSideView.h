@interface AWEPadSideView : UIView
- (void)configureUI;
- (void)themeDidChange:;
- (void)dealloc;
- (void)addObserver;
- (id)initWithFrame:;
- (id)hitTest:withEvent:;
@end
