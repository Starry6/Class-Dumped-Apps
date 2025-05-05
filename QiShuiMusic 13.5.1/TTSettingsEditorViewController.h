@interface TTSettingsEditorViewController : UIViewController
@property (nonatomic) NSString key;
@property (nonatomic) UILabel keyLabel;
@property (nonatomic) UITextView valueTextView;
- (void)setActionFired:;
- (id)initWithSettingKey:;
- (void)refreshValueTextView:;
- (void)setValueTextView:;
- (id)valueTextView;
- (void)showAlertView:;
- (id)key;
- (void)setKey:;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)keyLabel;
- (void)setKeyLabel:;
@end
