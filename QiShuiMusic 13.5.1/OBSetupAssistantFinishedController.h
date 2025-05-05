@interface OBSetupAssistantFinishedController : OBBaseWelcomeController
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) OBButtonTray buttonTray;
@property (nonatomic) OBBoldTrayButton boldButton;
@property (nonatomic) @? boldButtonBlock;
@property (nonatomic) UILabel instructionalLabel;
- (void)setTitleLabel:;
- (void)buttonTapped:;
- (id)initWithTitle:;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (id)directionalLayoutMargins;
- (id)titleLabel;
- (void)viewDidLoad;
- (id)instructionalLabel;
- (void)setInstructionalLabel:;
- (id)_headerFont;
- (id)buttonTray;
- (void)setButtonTray:;
- (id)boldButton;
- (void)setButtonTitle:action:;
- (void)setInstructionalText:;
- (id)_instructionFont;
- (void)setBoldButton:;
- (id)boldButtonBlock;
- (void)setBoldButtonBlock:;
@end
