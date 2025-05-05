@interface AWEIMStrongNoticeInteractor : AWEIMInteractorObject
@property (nonatomic) AWEIMStrongNoticeView noticeView;
@property (nonatomic) AWEIMMessageFollowViewInteractor followInteractor;
@property (nonatomic) AWEIMMessageFansCouponEntryInteractor fansCouponEntryInteractor;
@property (nonatomic) <AWEIMStrongNoticeInteractorDelegate> delegate;
@property (nonatomic) AWEIMPersonalExperienceNoticeTipInteractor personalExperienceInteractor;
- (id)fansCouponEntryInteractor;
- (id)followInteractor;
- (BOOL)hasMsgCloseStrongTips:inConversation:;
- (BOOL)isShowingStrongTips;
- (void)markMsgHasCloseStrongTips:inConversation:;
- (id)noticeView;
- (void)notifyDelegateStatusChangedWithWillShow:;
- (id)personalExperienceInteractor;
- (void)setFansCouponEntryInteractor:;
- (void)setFollowInteractor:;
- (void)setNoticeView:;
- (void)setPersonalExperienceInteractor:;
- (void)showStrongNoticeTipsWithMsg:inConversation:origin:;
- (id)vcParent;
- (double)contentHeight;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)updateLayout:;
@end
