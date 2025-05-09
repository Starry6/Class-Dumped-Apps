@interface AWEIMSilverWingLoadingComponent : AWEIMComponentBase
@property (nonatomic) AWEIMMessage fakeSilverWingLoadingMsg;
@property (nonatomic) BOOL cancelDelayedLoadingMsgDeletion;
@property (nonatomic) NSString lastCauseLoadingMsgID;
@property (nonatomic) <AWEIMSilverWingLoadingTrackInterface> loadingTrackComp;
@property (nonatomic) NSMutableSet waitingReplySet;
@property (nonatomic) NSMutableSet finishedReqIdSet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)insertFakeLoadingForHelloMsg;
- (void)willSendNewMessage;
- (void)didReceiveAsyncSendMessageResponse:;
- (void)didDeleteLoadingMemoryMessage:;
- (void)afterInitialComponentAllResolved:;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (void)didReceiveNewMessage:reason:;
- (void)didReceiveSendMessageResponse:message:result:;
- (void)willDeleteMessage:;
- (void)didUpdateWithMessage:;
- (void)p_addKVO;
- (void)streamLoadingDidFinishWithMessage:;
- (BOOL)hasLoadingWithMessage:;
- (BOOL)p_hasLoadingWithMessage:;
- (id)fakeSilverWingLoadingMsg;
- (void)setFakeSilverWingLoadingMsg:;
- (void)setWaitingReplySet:;
- (void)setFinishedReqIdSet:;
- (BOOL)p_messageFinished:;
- (id)finishedReqIdSet;
- (void)p_updateLoadingWithNewMessage:;
- (void)p_updateLoadingWithRecieveMessage:;
- (void)p_addLoadingIfNeeded;
- (void)p_removeLoadingIfNeeded;
- (id)waitingReplySet;
- (void)p_consumeWaitingSetWithMessage:;
- (BOOL)p_isCausedLoadingMessage:;
- (void)p_consumeAllWaitingSet;
- (void)p_didDeleteLoadingMemoryMessage:;
- (id)lastCauseLoadingMsgID;
- (BOOL)p_didSuccessAddLoadingIfNeededWithRemoveTime:;
- (void)p_addToWaitingSetWithMessage:;
- (void)p_addLoadingByWaitingSetIfNeeded;
- (id)loadingTrackComp;
- (void)insertFakeMessageForLoadingIfNeeded;
- (void)setCancelDelayedLoadingMsgDeletion:;
- (void)removeFakeMessageForLoadingDelayTime:messageID:;
- (BOOL)didSuccessInsertFakeMessageForLoadingIfNeeded;
- (void)setLastCauseLoadingMsgID:;
- (void)p_addToWaitingSetWithMessage:isHiMsg:;
- (BOOL)cancelDelayedLoadingMsgDeletion;
- (void)setLoadingTrackComp:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
