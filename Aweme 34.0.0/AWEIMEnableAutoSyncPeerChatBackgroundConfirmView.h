@interface AWEIMEnableAutoSyncPeerChatBackgroundConfirmView : AWEIMBasePopupView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIButton cancelBtn;
@property (nonatomic) UIButton enableAutoChangeBtn;
@property (nonatomic) @? enableAutoChangedAction;
@property (nonatomic) @? refuseAction;
- (id)cancelBtn;
- (void)setCancelBtn:;
- (id)refuseAction;
- (void)setRefuseAction:;
- (void)p_createPopupView;
- (void)p_cancelBtnAction;
- (void)setEnableAutoChangeBtn:;
- (id)enableAutoChangeBtn;
- (void)p_enableAutoChangeBtnAction;
- (id)enableAutoChangedAction;
- (void)showPopupViewIfNeeded;
- (void)setEnableAutoChangedAction:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)contentLabel;
- (void)setContentLabel:;
@end
