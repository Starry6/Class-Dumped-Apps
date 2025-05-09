@interface AWETextEditViewController : UIViewController
@property (nonatomic) UITextView contentCalculateHeightTextView;
@property (nonatomic) AWEAnimatedButton idCopyButton;
@property (nonatomic) Q style;
@property (nonatomic) NSString preTitle;
@property (nonatomic) NSString contentText;
@property (nonatomic) NSString numberText;
@property (nonatomic) NSString tipText;
@property (nonatomic) NSString placeholder;
@property (nonatomic) BOOL emptyIsChanged;
@property (nonatomic) BOOL shouldSaveChange;
@property (nonatomic) UITextField contentTextField;
@property (nonatomic) UIView sepView;
@property (nonatomic) UILabel numberLabel;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UITextView contentTextView;
@property (nonatomic) UIButton saveButton;
@property (nonatomic) UILabel preTitleLabel;
@property (nonatomic) UIButton deleteButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sepView;
- (id)contentTextView;
- (void)p_finishEditing;
- (id)tipText;
- (void)configWithStyle:preTitle:contentText:numberText:tipText:placeholder:emptyIsChanged:;
- (id)contentCalculateHeightTextView;
- (id)contentTextField;
- (void)deleteButtonClicked;
- (void)editTextFieldDidChange:;
- (void)editTextViewDidChange:;
- (BOOL)emptyIsChanged;
- (id)idCopyButton;
- (void)idCopyButtonClicked;
- (void)p_deleteButtonClicked;
- (void)p_saveButtonClicked;
- (id)preTitle;
- (id)preTitleLabel;
- (void)saveButtonClicked;
- (void)setContentCalculateHeightTextView:;
- (void)setContentTextField:;
- (void)setContentTextView:;
- (void)setEmptyIsChanged:;
- (void)setIdCopyButton:;
- (void)setPreTitle:;
- (void)setPreTitleLabel:;
- (void)setSepView:;
- (void)setShouldSaveChange:;
- (void)setStatusBarBackgroundColor:;
- (void)setTipLabelForContentTextView;
- (void)setTipText:;
- (BOOL)shouldSaveChange;
- (void)updateEmptyNumberText;
- (id)init;
- (void)didReceiveMemoryWarning;
- (void)textFieldDidEndEditing:;
- (BOOL)prefersStatusBarHidden;
- (id)placeholder;
- (void)setStyle:;
- (void)setPlaceholder:;
- (void)textFieldDidBeginEditing:;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (id)deleteButton;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (unsigned long long)style;
- (void)setDeleteButton:;
- (void)viewDidLoad;
- (id)tipLabel;
- (void)setTipLabel:;
- (void)textViewDidBeginEditing:;
- (double)layoutManager:lineSpacingAfterGlyphAtIndex:withProposedLineFragmentRect:;
- (void)textViewDidEndEditing:;
- (void)textViewDidChange:;
- (BOOL)textView:shouldChangeTextInRange:replacementText:;
- (void)textFieldDidChange:;
- (id)contentText;
- (void)setContentText:;
- (id)saveButton;
- (void)setSaveButton:;
- (void)_setupNavbar;
- (void)_setUpUI;
- (id)numberLabel;
- (void)setNumberLabel:;
- (id)numberText;
- (void)setNumberText:;
+ (void)iesim_setStatusBarBackgroundColor:;
@end
