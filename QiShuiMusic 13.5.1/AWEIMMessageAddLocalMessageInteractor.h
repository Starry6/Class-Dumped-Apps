@interface AWEIMMessageAddLocalMessageInteractor : AWEIMInteractorObject
@property (nonatomic) IESIMUserModel fullDetailUser;
@property (nonatomic) BOOL isFetchMessageFinished;
@property (nonatomic) NSMutableArray pendingSendMessages;
- (void)__tryAddFansGroupNoticeTipMessage;
- (void)__tryAddFansGroupOpenedNoticeMessage;
- (void)__tryAddFansGroupWelcomeNoticeMessage;
- (void)addFakePrivateTipsMsg;
- (void)addLocalMessageWithMessage:insertIntoDB:completion:;
- (void)didFetchFullDetailUser:;
- (void)fetchMsgDidFinished;
- (id)fullDetailUser;
- (BOOL)isFetchMessageFinished;
- (BOOL)p_enableAddFansGropNotice;
- (id)p_noticeWithContent:;
- (id)p_noticeWithContent:aweType:;
- (void)p_tryAddFakeAwemeTipMsg;
- (void)p_tryAddLocalInviteJoinFansGroupMessageForUser:;
- (void)p_tryAddWarmPromptMsg;
- (id)pendingSendMessages;
- (void)setFullDetailUser:;
- (void)setIsFetchMessageFinished:;
- (void)setPendingSendMessages:;
- (void)tryAddLocalMsg;
- (void)tryAddPrivateTipsMsg;
- (void)tryAddWarmPromptMsgWith:;
- (id)vcParent;
- (void).cxx_destruct;
@end
