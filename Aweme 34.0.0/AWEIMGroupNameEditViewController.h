@interface AWEIMGroupNameEditViewController : AWETextEditViewController
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) NSString groupName;
@property (nonatomic) UIView<IESIMLoadingViewProtocol> loadingView;
@property (nonatomic) BOOL shownInHalfScreen;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UITextView contentTextView;
- (BOOL)configWithRouterParamDict:;
- (void)saveButtonClicked;
- (void)updateEmptyNumberText;
- (void)editTextFieldDidChange:;
- (BOOL)shownInHalfScreen;
- (void)setShownInHalfScreen:;
- (void)__clickBlank;
- (double)minViewHeightForHalfScreen;
- (void)setGroupName:;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (id)loadingView;
- (id)groupName;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
- (id)initWithConversation:;
@end
