@interface UIKeyboardLayoutDictation : UIKeyboardLayout
- (void)_moveWithEvent:;
- (unsigned long long)_clipCornersOfView:;
- (BOOL)visible;
- (void)layoutSubviews;
- (BOOL)usesAutoShift;
- (id)dragGestureRectInView:;
- (void)setRenderConfig:;
- (BOOL)shouldFadeToLayout;
- (id)currentKeyplane;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)showKeyboardWithInputTraits:screenTraits:splitTraits:;
- (BOOL)shouldFadeFromLayout;
- (void)setupBackgroundViewForNewSplitTraits:;
- (id)splitLeftSize;
+ (id)keyboardSizeForInputMode:screenTraits:keyboardType:;
+ (id)activeInstance;
+ (BOOL)keyboardInputMode:supportsResizingOffsetForScreenTraits:;
@end
