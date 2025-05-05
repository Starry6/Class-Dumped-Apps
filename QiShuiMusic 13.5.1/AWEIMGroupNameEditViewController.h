@interface AWEIMGroupNameEditViewController : AWETextEditViewController
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) NSString groupName;
@property (nonatomic) IESIMUILoadingView loadingView;
@property (nonatomic) BOOL shownInHalfScreen;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__clickBlank;
- (void)editTextFieldDidChange:;
- (double)minViewHeightForHalfScreen;
- (void)saveButtonClicked;
- (void)setShownInHalfScreen:;
- (BOOL)shownInHalfScreen;
- (void)updateEmptyNumberText;
- (void)setGroupName:;
- (id)conversation;
- (void).cxx_destruct;
- (id)groupName;
- (void)viewDidLoad;
- (void)setConversation:;
- (id)initWithConversation:;
- (id)loadingView;
- (void)setLoadingView:;
@end
