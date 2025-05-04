@interface AWEQuickEditBottomView : UIView
@property (nonatomic) UIView verticalSepView;
@property (nonatomic) UIView horizontalSepView;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) UIButton confirmButton;
@property (nonatomic) @? cancelBlock;
@property (nonatomic) @? confirmBlock;
- (void)p_setupUI;
- (id)confirmBlock;
- (void)setConfirmBlock:;
- (void)clickCancelBtn:;
- (id)verticalSepView;
- (id)horizontalSepView;
- (void)clickConfirmBtn:;
- (void)setVerticalSepView:;
- (void)setHorizontalSepView:;
- (void)setCancelButton:;
- (void)setCancelBlock:;
- (id)initWithFrame:;
- (id)cancelButton;
- (void).cxx_destruct;
- (id)cancelBlock;
- (id)confirmButton;
- (void)setConfirmButton:;
@end
