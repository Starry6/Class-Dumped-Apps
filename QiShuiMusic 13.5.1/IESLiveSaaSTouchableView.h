@interface IESLiveSaaSTouchableView : UIView
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) BOOL isResponse;
@property (nonatomic) <IESLiveSaaSTouchableViewDelegate> delegate;
- (void)addGestures;
- (void)longPressGestureAction:;
- (void)panGestureAction:;
- (void)pinchGestureAction:;
- (void)rotationGestureAction:;
- (void)tapGestureAction:;
- (id)transformWithPoint:;
- (void)setDelegate:;
- (id)hitTest:withEvent:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (id)tapGesture;
- (BOOL)isResponse;
- (void)setIsResponse:;
- (void)setTapGesture:;
@end
