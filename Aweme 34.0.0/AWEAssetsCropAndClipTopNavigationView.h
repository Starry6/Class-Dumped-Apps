@interface AWEAssetsCropAndClipTopNavigationView : UIView
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) UIButton saveButton;
@property (nonatomic) @? saveCallback;
@property (nonatomic) @? cancelCallback;
- (void)onCancelAction:;
- (void)setCancelCallback:;
- (id)cancelCallback;
- (void)setSaveCallback:;
- (void)onSaveAction:;
- (id)saveCallback;
- (void)setCancelButton:;
- (id)initWithFrame:;
- (id)cancelButton;
- (void).cxx_destruct;
- (void)setupUI;
- (id)saveButton;
- (void)setSaveButton:;
@end
