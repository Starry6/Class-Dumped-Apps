@interface AWEUIPreviewDraggableView : UIView
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) UIButton uiPreviewButton;
@property (nonatomic) UIButton closeButton;
- (void)setUiPreviewButton:;
- (id)uiPreviewButton;
- (id)finalCenterForView:;
- (void)handlePan:;
- (id)initWithFrame:;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (void)setIsAnimating:;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
@end
