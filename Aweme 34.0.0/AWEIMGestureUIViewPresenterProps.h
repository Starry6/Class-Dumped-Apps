@interface AWEIMGestureUIViewPresenterProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? tapAction;
@property (nonatomic) @? alphaTapAction;
@property (nonatomic) @? doubleTapAction;
@property (nonatomic) @? longPressAction;
@property (nonatomic) @? longPressReceiveTouchBlock;
@property (nonatomic) @? tapReceiveTouchBlock;
- (void)setAlphaTapAction:;
- (id)alphaTapAction;
- (id)longPressReceiveTouchBlock;
- (void)setLongPressReceiveTouchBlock:;
- (id)tapReceiveTouchBlock;
- (void)setTapReceiveTouchBlock:;
- (id)longPressAction;
- (void).cxx_destruct;
- (id)doubleTapAction;
- (void)setDoubleTapAction:;
- (void)setLongPressAction:;
- (id)tapAction;
- (void)setTapAction:;
@end
