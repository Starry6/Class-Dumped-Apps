@interface AWEIMMessageTrackInteractor : AWEIMComponentBase
@property (nonatomic) q sendSuccessCount;
@property (nonatomic) q sendSuccessGifCount;
@property (nonatomic) q sendSuccessCustomGifCount;
@property (nonatomic) q sendSuccessTextCount;
@property (nonatomic) q sendSuccessPicCount;
@property (nonatomic) q sendSuccessAudioCount;
@property (nonatomic) q sendSuccessGiphyCount;
@property (nonatomic) q sendSuccessVideoCount;
@property (nonatomic) q sendFailCount;
@property (nonatomic) q sendFailGifCount;
@property (nonatomic) q sendFailCustomGifCount;
@property (nonatomic) q sendFailTextCount;
@property (nonatomic) q sendFailPicCount;
@property (nonatomic) q sendFailAudioCount;
@property (nonatomic) q sendFailGiphyCount;
@property (nonatomic) q sendFailVideoCount;
@property (nonatomic) NSDate startTime;
@property (nonatomic) NSDictionary trackingParams;
@property (nonatomic) BOOL hasTrackEventEnterChatAfter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)backButtonClick;
- (void)didUpdatedConversation:messageId:error:;
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (void)didReceiveSendMessageResponse:message:result:;
- (long long)sendFailCount;
- (void)setSendFailCount:;
- (void)appDidEnterBackgroundNotification:;
- (id)vcParent;
- (void)updateTrackingParamsEntries:;
- (void)didReceiveSendMessageResponse:result:;
- (void)cellBubbleViewTapped:;
- (void)trackEventEnterChatAfterConversation:nonFriendActiveInfo:enterFrom:;
- (id)trackingParams;
- (void)setTrackingParams:;
- (BOOL)hasTrackEventEnterChatAfter;
- (void)setHasTrackEventEnterChatAfter:;
- (void)trackStrangerEventIfNeedWithParams;
- (long long)sendSuccessCustomGifCount;
- (void)setSendSuccessCustomGifCount:;
- (long long)sendSuccessGiphyCount;
- (void)setSendSuccessGiphyCount:;
- (long long)sendSuccessGifCount;
- (void)setSendSuccessGifCount:;
- (long long)sendSuccessTextCount;
- (void)setSendSuccessTextCount:;
- (long long)sendSuccessPicCount;
- (void)setSendSuccessPicCount:;
- (long long)sendSuccessAudioCount;
- (void)setSendSuccessAudioCount:;
- (long long)sendSuccessVideoCount;
- (void)setSendSuccessVideoCount:;
- (long long)sendSuccessCount;
- (void)setSendSuccessCount:;
- (long long)sendFailCustomGifCount;
- (void)setSendFailCustomGifCount:;
- (long long)sendFailGiphyCount;
- (void)setSendFailGiphyCount:;
- (long long)sendFailGifCount;
- (void)setSendFailGifCount:;
- (long long)sendFailTextCount;
- (void)setSendFailTextCount:;
- (long long)sendFailPicCount;
- (void)setSendFailPicCount:;
- (long long)sendFailAudioCount;
- (void)setSendFailAudioCount:;
- (long long)sendFailVideoCount;
- (void)setSendFailVideoCount:;
- (void)appDidEnterFrontgroundNotification:;
- (void)handleSendAttachmentMsgUploadFailedNty:;
- (void)__setStrangerSecondPreviousPageTracker;
- (void)p_trackLeaveChatEvent;
- (void)__cleanStrangerSecondPreviousPageTracker;
- (void)p_trackChatStats;
- (void)p_trackStrangerStats;
- (id)p_logStringWithSuccessCount:failed:;
- (id)init;
- (void)dealloc;
- (void)setStartTime:;
- (void).cxx_destruct;
- (id)startTime;
+ (BOOL)canCreateComponentWithContext:;
@end
