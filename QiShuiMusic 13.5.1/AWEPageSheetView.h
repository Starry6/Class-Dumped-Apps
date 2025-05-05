@interface AWEPageSheetView : UIView
@property (nonatomic) UIPanGestureRecognizer panGestureRecognizer;
@property (nonatomic) UIPanGestureRecognizer horizontalPanGestureRecognizer;
@property (nonatomic) UITapGestureRecognizer tapGestureRecognizer;
@property (nonatomic) double topCornerRadius;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIView grabber;
- (id)horizontalPanGestureRecognizer;
- (void)setHorizontalPanGestureRecognizer:;
- (void)setTopCornerRadius:;
- (void)setTapGestureRecognizer:;
- (id)panGestureRecognizer;
- (id)tapGestureRecognizer;
- (void)didAddSubview:;
- (id)initWithFrame:;
- (void)setPanGestureRecognizer:;
- (void).cxx_destruct;
- (id)grabber;
- (void)setGrabber:;
- (id)closeButton;
- (void)setCloseButton:;
- (double)topCornerRadius;
@end
