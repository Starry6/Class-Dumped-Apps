@interface BDXACheckBoxToastView : UIView
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIView backGroundView;
@property (nonatomic) UIImageView arrowImgView;
- (id)arrowImgView;
- (id)backGroundView;
- (void)loadSubView;
- (void)setArrowImgView:;
- (void)setBackGroundView:;
- (void)show;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)willMoveToWindow:;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)closeButtonTapped;
@end
