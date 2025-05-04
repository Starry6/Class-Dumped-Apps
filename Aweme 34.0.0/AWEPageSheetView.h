@interface AWEPageSheetView : UIView
@property (nonatomic) UIPanGestureRecognizer panGestureRecognizer;
@property (nonatomic) UIPanGestureRecognizer horizontalPanGestureRecognizer;
@property (nonatomic) UITapGestureRecognizer tapGestureRecognizer;
@property (nonatomic) double topCornerRadius;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIView grabber;
- (id)horizontalPanGestureRecognizer;
- (void)setTopCornerRadius:;
- (void)setHorizontalPanGestureRecognizer:;
- (void)setTapGestureRecognizer:;
- (id)tapGestureRecognizer;
- (id)initWithFrame:;
- (void)didAddSubview:;
- (void)setPanGestureRecognizer:;
- (void).cxx_destruct;
- (id)panGestureRecognizer;
- (id)grabber;
- (void)setGrabber:;
- (void)setCloseButton:;
- (id)closeButton;
- (double)topCornerRadius;
@end
