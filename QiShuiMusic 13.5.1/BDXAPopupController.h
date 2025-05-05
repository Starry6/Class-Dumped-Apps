@interface BDXAPopupController : UIViewController
@property (nonatomic) UIViewController wrappedController;
@property (nonatomic) q style;
@property (nonatomic) q type;
@property (nonatomic) double contentHeight;
- (void)setWrappedController:;
- (id)wrappedController;
- (double)contentHeight;
- (void)dealloc;
- (void)setType:;
- (void)setStyle:;
- (void)dismissWithCompletion:;
- (long long)type;
- (void).cxx_destruct;
- (long long)style;
- (void)setContentHeight:;
- (void)viewDidLoad;
- (void)handleKeyboardWillShow:;
- (void)handleKeyboardWillHide:;
- (void)presentWithViewController:;
+ (id)popupControllerWithWrappedController:style:type:;
@end
