@interface AWEIMGroupAliasEditViewController : AWETextEditViewController
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) NSString groupAlias;
@property (nonatomic) IESIMUILoadingView loadingView;
@property (nonatomic) BOOL shownInHalfScreen;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__clickBlank;
- (id)conversationDataManager;
- (void)deleteButtonClicked;
- (void)editTextFieldDidChange:;
- (id)groupAlias;
- (double)minViewHeightForHalfScreen;
- (void)saveButtonClicked;
- (void)setGroupAlias:;
- (void)setShownInHalfScreen:;
- (BOOL)shownInHalfScreen;
- (void)updateEmptyNumberText;
- (id)conversation;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setConversation:;
- (id)initWithConversation:;
- (id)loadingView;
- (void)setLoadingView:;
@end
