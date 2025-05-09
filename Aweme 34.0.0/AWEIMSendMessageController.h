@interface AWEIMSendMessageController : NSObject
@property (nonatomic) NSMutableDictionary sessions;
@property (nonatomic) NSMutableSet needShowToastMessages;
@property (nonatomic) NSMutableDictionary mediaEditStateDict;
@property (nonatomic) NSMutableDictionary mediaPaintedStateDict;
@property (nonatomic) NSMutableDictionary customToastDict;
@property (nonatomic) NSMutableDictionary customEnterMethodDict;
@property (nonatomic) NSMutableDictionary customSendMessageDict;
@property (nonatomic) NSMutableDictionary textMessageTypeDict;
@property (nonatomic) NSMutableDictionary messageShareContextDict;
@property (nonatomic) NSMutableSet boostVideoShareInfo;
@property (nonatomic) NSMutableSet hotShareVideoShareInfo;
@property (nonatomic) NSMutableDictionary messageDidSendCallbackDict;
@property (nonatomic) NSMutableDictionary messageTypeDidSendCallbackDict;
@property (nonatomic) NSHashTable delegates;
@property (nonatomic) NSLock delegateLock;
@property (nonatomic) FBKVOController uploaderKVO;
@property (nonatomic) NSMutableDictionary trackResponseMap;
@property (nonatomic) NSMutableDictionary trackConvMap;
@property (nonatomic) BOOL isAdsFromFeed;
@property (nonatomic) NSString itemIDFromFeed;
@property (nonatomic) NSObject<OS_dispatch_queue> attachmentQueue;
@property (nonatomic) AWEIMVideoTransCoder transcoder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)iesim_didReceiveSendMessageResponse:;
- (void)iesim_didReceiveAsyncSendMessageResponse:;
- (void)registerHandlingSendingResultCallbackWithMessageID:callback:;
- (id)enterFromValueWithProcessId:;
- (id)enterMethodValueWithProcessId:;
- (void)sendBatchMessages:forwardMessage:completion:;
- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (void)asyncSendMessage:completion:;
- (id)addFakeMessage:conversationID:;
- (id)sendMessage:conversation:forwardMessage:mentionUsers:;
- (id)sendMessage:conversation:forwardMessage:mentionUsers:enterFrom:;
- (void)customToastWithMessageID:successToast:;
- (id)addFakeMessage:status:conversationID:;
- (void)registerHandlingSendingResultCallbackWithMessageType:callback:;
- (void)unregisterHandlingSendingResultCallbackWithMessageType:;
- (void)sendMessages:forwardMessage:completion:;
- (id)transcoder;
- (void)setTranscoder:;
- (void)setUploaderKVO:;
- (id)uploaderKVO;
- (id)attachmentQueue;
- (id)p_getEnterFromWithAweType:;
- (id)consumeCachedConvBeforeSendMsgWithMsgID:;
- (void)cancelSendAttachmentMessage:;
- (void)sendMessageRepeatedlyWithSendBlock:;
- (id)addFakeMessage:conversation:;
- (void)sender_resendMessage:conversation:;
- (void)setTrackResponseMap:;
- (void)setTrackConvMap:;
- (void)setAttachmentQueue:;
- (void)setNeedShowToastMessages:;
- (void)setBoostVideoShareInfo:;
- (void)setHotShareVideoShareInfo:;
- (void)setCustomToastDict:;
- (void)setMediaEditStateDict:;
- (void)setMediaPaintedStateDict:;
- (void)setCustomEnterMethodDict:;
- (void)setCustomSendMessageDict:;
- (void)setMessageDidSendCallbackDict:;
- (void)setMessageTypeDidSendCallbackDict:;
- (void)setIsAdsFromFeed:;
- (void)setItemIDFromFeed:;
- (void)handleAttachmentMsgUploadFailedNotification:;
- (void)handleItemIDFromFeed:;
- (void)handleDidEnterBackgroundNotification;
- (id)needShowToastMessages;
- (id)customToastDict;
- (id)messageDidSendCallbackDict;
- (id)messageTypeDidSendCallbackDict;
- (id)aiExtParamsAddTosendMessageFromDelegate;
- (id)textMessageTypeDict;
- (long long)timesSendMessageRepeatedlyWithSendBlock;
- (id)addFakeMessage:status:conversation:;
- (id)getSendMessageClientExtWithSendModel:;
- (id)messageShareContextDict;
- (id)boostVideoShareInfo;
- (BOOL)isCustomEnterMethod:;
- (id)customEnterMethodDict;
- (id)socialRelationTrackFlagForUid:;
- (id)__atMessageTypeForTrackingSendMessagesFromMentionMask:;
- (void)configAudioMessageTrackWithType:contentDic:params:;
- (void)configParamsWhenDefaultLandingToIMWithParams:;
- (id)gameInviteTrackingCommomParamsWithContent:;
- (id)facePuzzleTrackingCommomParamsWithLocalExt:;
- (id)mediaEditStateDict;
- (id)mediaPaintedStateDict;
- (id)customSendMessageDict;
- (id)p_aiExtraParamsWithMessageType:messageContent:con:;
- (id)extraParamsForSendMessageFromDelegateWithCid:;
- (void)p_cacheConvBeforeSendMsg:forMsgID:;
- (void)p_trackSendAtMessageIfNeedWithEvent:messageType:messageContent:con:extraParams:;
- (id)p_dealShareVideoTaskWithContainers:;
- (BOOL)isAllContainerFinished:;
- (void)p_dealShareVideoTaskSendMessageGroup:;
- (id)p_sendMessage:toConverSation:forwardMessage:sentMessageDict:;
- (id)p_degradeMessageIfNeeded:targetConverSation:;
- (void)resetForwardMsgWhenFilePathEmpty:toConversation:;
- (id)constructSendMessageAttachmentObjectWithDBModelArray:message:conversationID:;
- (id)itemIDFromFeed;
- (BOOL)isAdsFromFeed;
- (void)identityVerificationTrackWithEvent:conversation:extra:;
- (void)setCheckMsg:msg:;
- (void)showUpdatedIdentifyVerifyIfNeedWithConversation:response:;
- (id)__secneWithStatusCode:;
- (void)handleSendMessageResponseExtraInfo:;
- (BOOL)p_isResponseValid:;
- (id)extraParamsForResponseFromDelegateWithCid:;
- (void)trackSendMessageContentIfNeededWithMessage:con:response:extraParams:;
- (void)trackTypingSpeedIfNeededWithMessage:con:response:extraParams:;
- (id)trackConvMap;
- (id)p_trackStringForIsFromHostWithRole:;
- (id)getMatchedResultWithSearchText:pattern:;
- (void)p_handleSendMessageResponse:;
- (id)trackResponseMap;
- (void)p_trackWithResponse:isTimeout:;
- (void)p_reportIMShareWithMessage:inConversation:;
- (id)insertAttachmentMessagePlaceholder:conversation:;
- (void)setTextMessageTypeDict:;
- (void)setMessageShareContextDict:;
- (id)hotShareVideoShareInfo;
- (id)sessions;
- (id)sender;
- (id)init;
- (void)dealloc;
- (id)delegates;
- (void)setDelegates:;
- (id)delegateLock;
- (void)addDelegate:;
- (void)removeDelegate:;
- (void).cxx_destruct;
- (void)setSessions:;
- (id)sendMessage:;
- (void)setDelegateLock:;
+ (id)emojiRegex;
+ (id)sendSerialQueue;
+ (id)sharedInstance;
@end
