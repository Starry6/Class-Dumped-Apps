@interface FLEXVariableEditorViewController : UIViewController
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) @ target;
@property (nonatomic) FLEXArgumentInputView firstInputView;
@property (nonatomic) FLEXFieldEditorView fieldEditorView;
@property (nonatomic) UIBarButtonItem actionButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTarget:data:commitHandler:;
- (void)dealloc;
- (void)keyboardDidShow:;
- (void)keyboardWillHide:;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)firstInputView;
- (void)actionButtonPressed:;
- (void)exploreObjectOrPopViewController:;
- (id)target;
- (id)fieldEditorView;
- (id)actionButton;
- (id)scrollView;
- (void)setScrollView:;
- (void).cxx_destruct;
+ (id)target:data:commitHandler:;
@end
