@interface CJPayCustomKeyboardTopView : UIView
@property (nonatomic) CJPayButton leftButton;
@property (nonatomic) CJPayButton rightButton;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) @? completionBlock;
- (void)leftButtonClick;
- (void)rightButtonClick;
- (void)setCompletionBtnHidden:;
- (void)setInsuranceURLString:;
- (void)setCompletionBlock:;
- (id)leftButton;
- (id)rightButton;
- (id)initWithFrame:;
- (void)setLeftButton:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setRightButton:;
- (id)completionBlock;
- (void)setImageView:;
- (void)setupUI;
@end
