@interface AWEIMInviteChangeChatBgConfirmPopupView : AWEIMBasePopupView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIButton changeMyselfBtn;
@property (nonatomic) UIButton inviteToChangeBtn;
@property (nonatomic) BOOL isGroupChat;
@property (nonatomic) @? changeMyselfAction;
@property (nonatomic) @? inviteToChangeAction;
- (void)p_createPopupView;
- (void)setChangeMyselfBtn:;
- (id)changeMyselfBtn;
- (void)p_changeBgSelfOnly;
- (void)setInviteToChangeBtn:;
- (id)inviteToChangeBtn;
- (void)p_inviteToChange;
- (void)setChangeMyselfAction:;
- (void)setInviteToChangeAction:;
- (void)showPopupViewWithChatType:;
- (id)changeMyselfAction;
- (id)inviteToChangeAction;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)contentLabel;
- (void)setContentLabel:;
- (BOOL)isGroupChat;
- (void)setIsGroupChat:;
@end
