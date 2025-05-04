@interface AWEPublishAdvanceSettingChangeTitleViewController : UIViewController
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton finishButton;
@property (nonatomic) UITextField textField;
@property (nonatomic) AWEPublishPaymentPreviewItem item;
@property (nonatomic) @? updateItemBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFinishButton:;
- (id)updateItemBlock;
- (void)updateStateWithText:;
- (void)finishButtonTapped;
- (void)setUpdateItemBlock:;
- (void)viewDidLoad;
- (id)textField;
- (void)setItem:;
- (id)item;
- (void)setTextField:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (void)textFieldDidChange:;
- (id)finishButton;
- (void)clearButtonTapped;
@end
