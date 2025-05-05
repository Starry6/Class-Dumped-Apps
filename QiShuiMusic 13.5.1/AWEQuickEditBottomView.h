@interface AWEQuickEditBottomView : UIView
@property (nonatomic) UIView verticalSepView;
@property (nonatomic) UIView horizontalSepView;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) UIButton confirmButton;
@property (nonatomic) @? cancelBlock;
@property (nonatomic) @? confirmBlock;
- (void)clickCancelBtn:;
- (id)verticalSepView;
- (void)clickConfirmBtn:;
- (id)confirmBlock;
- (id)horizontalSepView;
- (void)p_setupUI;
- (void)setConfirmBlock:;
- (void)setHorizontalSepView:;
- (void)setVerticalSepView:;
- (void)setCancelBlock:;
- (id)initWithFrame:;
- (id)cancelBlock;
- (void).cxx_destruct;
- (void)setCancelButton:;
- (id)cancelButton;
- (id)confirmButton;
- (void)setConfirmButton:;
@end
