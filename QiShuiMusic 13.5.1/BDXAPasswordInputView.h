@interface BDXAPasswordInputView : BDXACommonInputView
@property (nonatomic) UIButton passwordVisualBtn;
@property (nonatomic) UIImage passwordVisualOpenImg;
@property (nonatomic) UIImage passwordVisualCloseImg;
- (void)changePasswordVisual;
- (void)loadSubViews;
- (id)passwordVisualBtn;
- (id)passwordVisualCloseImg;
- (id)passwordVisualOpenImg;
- (void)setPasswordVisualBtn:;
- (void)setPasswordVisualCloseImg:;
- (void)setPasswordVisualOpenImg:;
- (void)textFieldDidBeginEditing:;
- (void).cxx_destruct;
@end
