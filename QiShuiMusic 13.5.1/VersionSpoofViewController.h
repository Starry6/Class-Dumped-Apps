@interface VersionSpoofViewController : UIViewController
@property (nonatomic) UITextField versionField;
@property (nonatomic) UITextField systemVersionField;
@property (nonatomic) UITextField deviceModelField;
@property (nonatomic) UIButton saveButton;
@property (nonatomic) UIButton clearButton;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UILabel statusLabel;
@property (nonatomic) UILabel currentVersionLabel;
- (void)viewDidLoad;
- (void)dismissKeyboard;
- (void)viewWillAppear:;
- (void)updateInputFieldsWithConfig;
- (void)setupUI;
- (void)keyboardWillShow:;
- (void)keyboardWillHide:;
- (void)loadCurrentSpoofConfig;
- (void)saveConfig;
- (void)clearConfig;
- (void)closeSettings;
- (void)dealloc;
- (id)versionField;
- (void)setVersionField:;
- (id)systemVersionField;
- (void)setSystemVersionField:;
- (id)deviceModelField;
- (void)setDeviceModelField:;
- (id)saveButton;
- (void)setSaveButton:;
- (id)clearButton;
- (void)setClearButton:;
- (id)closeButton;
- (void)setCloseButton:;
- (id)statusLabel;
- (void)setStatusLabel:;
- (id)currentVersionLabel;
- (void)setCurrentVersionLabel:;
- (void).cxx_destruct;
@end
