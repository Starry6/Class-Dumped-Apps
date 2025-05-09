@interface IESLivePublicScreenDataFlowManager : NSObject
@property (nonatomic) IESLivePublicScreenContext context;
@property (nonatomic) IESLivePublicScreenNodeManager nodeManager;
@property (nonatomic) <IESLivePSAttachmentService> attachmentManager;
@property (nonatomic) IESLivePublicScreenNotificationCenter notifyCenter;
@property (nonatomic) <IESLivePublicScreenASRMsgCollectionProvider> asrMsgCollectionProvider;
@property (nonatomic) BOOL didStopRefresh;
@property (nonatomic) NSNumber publicScreenID;
@property (nonatomic) BOOL enterRoomOptRefreshDetached;
@property (nonatomic) BOOL messageReceived;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)messageReceived;
- (void)setEnterRoomOptRefreshDetached:;
- (void)addNodeHandler:;
- (BOOL)convergedModule;
- (void)removeAllBuffer;
- (void)setNodeManager:;
- (void)addMessageHandler:;
- (void)addSubscriber:forEvent:;
- (void)addSubscriberForMessages:;
- (id)allBufferMessages;
- (id)allBufferNodes;
- (id)asrMsgCollectionProvider;
- (void)attachASRMsgColletion;
- (void)attachHeatTimerIfNeeded;
- (void)attachMessageAndNodeHandler;
- (void)attachRefreshStrategy;
- (id)currentRefreshConfig;
- (BOOL)didStopRefresh;
- (BOOL)enterRoomOptRefreshDetached;
- (void)handleAttachments;
- (void)handleDeleteMessage:;
- (void)handlePublicScreenMessage:;
- (void)immediateRefreshAndResetTimer;
- (id)initWithPublicScreenContext:delegate:;
- (id)initWithPublicScreenInfo:styleConfig:dataFlowConfig:delegate:;
- (id)initWithPublicScreenInfo:styleConfig:dataFlowConfig:delegate:attachments:;
- (id)nodeManager;
- (id)notifyCenter;
- (void)processNodeWithDirectlyShowStrategy:;
- (void)processNodeWithTask:;
- (id)publicScreenID;
- (void)removeDuplicateMessageBuffer;
- (void)removeMessageHandler:;
- (void)removeNodeHandler:;
- (void)removeRefreshConfigWithPriority:;
- (void)setAsrMsgCollectionProvider:;
- (void)setDidStopRefresh:;
- (void)setMessageReceived:;
- (void)setNotifyCenter:;
- (void)setPublicScreenID:;
- (void)setupDefaultDataHandler;
- (void)setupWithPublicScreenContext:delegate:;
- (void)showPublicScreenMessageImmediately:;
- (void)startCommitWithCaller:;
- (void)startConsumeMessageWithCaller:;
- (void)startRefreshWithCaller:;
- (void)stopCommitWithCaller:;
- (void)stopConsumeMessageWithCaller:;
- (void)stopRefreshWithCaller:;
- (void)updateNodeStyleConfig:completion:;
- (void)updateNodesSizeWithMaxLayoutWidth:completion:;
- (void)updateRefreshConfig:;
- (id)context;
- (id)attachmentManager;
- (void).cxx_destruct;
- (void)setContext:;
- (void)removeSubscriber:;
- (void)messageReceived:;
- (void)setAttachmentManager:;
@end
