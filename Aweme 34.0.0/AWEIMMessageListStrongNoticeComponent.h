@interface AWEIMMessageListStrongNoticeComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMMessageListTopFloatingInterface> topFloatingService;
@property (nonatomic) AWEIMStrongNoticeMessage message;
@property (nonatomic) AWEIMMessage msg;
@property (nonatomic) AWEIMStrongNoticeView noticeView;
@property (nonatomic) BOOL showInFloatMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) @? continueBlock;
@property (nonatomic) @? removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) Q priorityValue;
- (BOOL)showInFloatMode;
- (void)setShowInFloatMode:;
- (id)removeBlock;
- (void)setRemoveBlock:;
- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:;
- (id)shouldRemoveForPriorityObject:;
- (void)componentDidMounted:;
- (id)noticeView;
- (void)setNoticeView:;
- (void)p_dismiss;
- (void)messageListBackgroundImageDidUpdated:;
- (id)topFloatingService;
- (void)setTopFloatingService:;
- (void)handleReceiveStrongTipsNoticeNty:;
- (void)showStrongNoticeTipWithMsg:;
- (BOOL)isShowingStrongTips;
- (BOOL)showStrongNoticeTipsWithMsg:;
- (BOOL)hasMsgCloseStrongTips:inConversation:;
- (void)markMsgHasCloseStrongTips:inConversation:;
- (id)message;
- (void)setInvalid:;
- (void).cxx_destruct;
- (void)setMessage:;
- (BOOL)invalid;
- (id)continueBlock;
- (void)setContinueBlock:;
- (void)setMsg:;
- (id)msg;
- (unsigned long long)priorityValue;
- (void)setPriorityValue:;
+ (BOOL)canCreateComponentWithContext:;
@end
