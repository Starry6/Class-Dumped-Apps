@interface AWEIMGroupAliasEditViewController : AWETextEditViewController
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) NSString groupAlias;
@property (nonatomic) UIView<IESIMLoadingViewProtocol> loadingView;
@property (nonatomic) BOOL shownInHalfScreen;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UITextView contentTextView;
- (void)deleteButtonClicked;
- (void)setGroupAlias:;
- (id)conversationDataManager;
- (void)saveButtonClicked;
- (void)updateEmptyNumberText;
- (void)editTextFieldDidChange:;
- (id)groupAlias;
- (BOOL)shownInHalfScreen;
- (void)setShownInHalfScreen:;
- (void)__clickBlank;
- (double)minViewHeightForHalfScreen;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (id)loadingView;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
- (id)initWithConversation:;
@end
