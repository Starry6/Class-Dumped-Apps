@interface EditMappingViewController : UIViewController
@property (nonatomic) UITextView textView;
- (void)viewDidLoad;
- (void)addHintLabelBelowButtonAtY:;
- (void)dismissKeyboard;
- (void)loadMappings;
- (void)createButtonWithTitle:yPosition:action:backgroundColor:;
- (BOOL)validateMapping:;
- (void)saveMappings;
- (void)confirmClearMappings;
- (void)clearMappings;
- (void)cancelButtonTapped;
- (void)showAlertWithTitle:message:;
- (id)textView;
- (void)setTextView:;
- (void).cxx_destruct;
@end
