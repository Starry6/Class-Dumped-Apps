@interface AWEIMPhotoPickerFunctionView : UIView
@property (nonatomic) AWEIMPhotoPickerFunctionModel model;
@property (nonatomic) UIButton actionButton;
- (void)updateBtnTitleShadowWithBackground:;
- (void)onButtonPressed:;
- (void)setModel:;
- (id)initWithModel:;
- (id)model;
- (void).cxx_destruct;
- (id)actionButton;
- (void)setActionButton:;
- (void)setupView;
- (void)setupObserver;
@end
