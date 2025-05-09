@interface AWEIMEditorSendView : UIView
@property (nonatomic) Q type;
@property (nonatomic) Q function;
@property (nonatomic) UIButton smallBtn;
@property (nonatomic) ACCButton functionButton;
@property (nonatomic) UIButton sendButton;
@property (nonatomic) UIButton completeButton;
@property (nonatomic) AWEStudioRepoIMModel imModel;
@property (nonatomic) AWEBubble syncToFriendsBubble;
@property (nonatomic) DUXPopover syncToFriendsPopover;
@property (nonatomic) <AWEIMEditorSendViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithModel:type:;
- (id)completeButton;
- (void)setCompleteButton:;
- (id)completeButtonTitle;
- (void)removeBubble;
- (void)setImModel:;
- (id)imModel;
- (void)notifyDelegateWithClickType:;
- (void)showSyncToFriendsBubble;
- (void)showWatchOnceGuideIfNeed:containerView:;
- (id)__effectSettings;
- (void)setActionButtonLoadingState:;
- (void)setupSubviewsByFunc;
- (id)smallBtn;
- (id)functionButton;
- (id)p_buttonBackgroundColor;
- (id)p_buttonTextColor;
- (id)p_buttonTitle;
- (id)p_buttonImageName;
- (void)clickedLeftButton;
- (id)getGuideAnchorView;
- (id)syncToFriendsBubble;
- (id)syncToFriendsPopover;
- (id)newStyleV1SendTotherFriendsButton;
- (id)sendToCurrentFriendButtonTitle;
- (void)clickedRightButton;
- (id)newStyleRedBackgroundButtonWithTitle:touchUpInsideSelector:;
- (void)clickedCompleteButton;
- (id)completeRedBackgroundButtonWithTitle:touchUpInsideSelector:;
- (void)clickedSmallBtn;
- (id)initWithModel:function:;
- (void)setSmallBtn:;
- (void)setFunctionButton:;
- (void)setSyncToFriendsBubble:;
- (void)setSyncToFriendsPopover:;
- (void)setFunction:;
- (unsigned long long)function;
- (id)init;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)registerNotifications;
- (void)setDelegate:;
- (void)setupUI;
- (void)setupSubviews;
- (id)sendButton;
- (void)setSendButton:;
@end
