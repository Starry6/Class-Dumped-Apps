@interface AWEIMContextRecommendUtil : NSObject
@property (nonatomic) NSMutableArray chatList;
@property (nonatomic) double nextServerRequestTime;
@property (nonatomic) BOOL didFirstRequest;
@property (nonatomic) NSMutableDictionary mNoticeFlagDict;
@property (nonatomic) BOOL enableOptWatchOnceStrategy;
@property (nonatomic) Q requestType;
- (void)setupScene:conversation:completion:;
- (void)startGreetInfoRequestIfNeeded;
- (void)initNextServerRequestTime;
- (void)p_insertGreetNoticeIfNeeded:;
- (void)handleApplicaitonWillEnterForegroundNotification;
- (void)reuqestRecHelloInfoWithSceneIfNeeded:;
- (void)lazyInitNextServerRequestTime;
- (id)p_storageKeyWithIdenifier:;
- (void)setNextServerRequestTime:;
- (void)p_reuqestRecHelloInfoWithSceneIfNeeded:;
- (id)getContextRecommendDict;
- (BOOL)enableOptWatchOnceStrategy;
- (void)p_reportWatchOnceSwitchStatus;
- (void)handleContextRecommendDict:;
- (void)handleSilverWingDict:;
- (void)handleWatchOnceSwitchDict:;
- (id)p_localTypeEndTimeStr;
- (void)p_insertGreetTagIfNeeded:completion:;
- (id)mNoticeFlagDict;
- (void)startGreetInfoIfNeededWhenAcountSwitch;
- (void)setChatList:;
- (double)nextServerRequestTime;
- (BOOL)didFirstRequest;
- (void)setDidFirstRequest:;
- (void)setMNoticeFlagDict:;
- (void)setEnableOptWatchOnceStrategy:;
- (id)init;
- (void)setRequestType:;
- (unsigned long long)requestType;
- (id)chatList;
- (void).cxx_destruct;
- (void)registerNotificationObserver;
+ (unsigned long long)availableContextRecommendSceneForConversation:;
+ (void)update_contextRecommendForConversation:;
+ (BOOL)enable_contextRecommendForConversation:;
+ (id)buttonTitle_contextRecommendForConversation:;
+ (id)iconUrl_contextRecommendForConversation:;
+ (id)source_contextRecommendForConversation:;
+ (void)setChatCellDidClickIfNeeded:source:;
+ (BOOL)conversaionHasRecommendNotice:;
+ (void)deleteNoticeMsgIfNeeded:;
+ (BOOL)enable_contextRecommendInActionBarForConversation:;
+ (BOOL)messageHasRecommendNoticeIsExpire:;
+ (BOOL)p_enableByReverse;
+ (void)p_deleteNoticeMessageIfNeeded:;
+ (BOOL)isConversationClick:;
+ (unsigned long long)currentContextRecommendSceneForConversation:;
+ (BOOL)p_enableContextRecommendSceneCreateGroupForConversation:;
+ (id)greetType_contextRecommendForConversation:;
+ (double)p_EndTimeForConversation:;
+ (id)p_typeEndtimePairDictForConversation:;
+ (BOOL)serverEnable_contextRecommendForConversation:;
+ (id)p_typeStrForConversation:;
+ (id)sourceForTracker_contextRecommendForConversation:;
+ (id)currentMessageIdForConversation:;
+ (void)p_deleteSDKMsgIfNeeded:inConversation:;
+ (void)p_clearCurrentMsgIdForConversation:;
+ (id)configName_contextRecommendForConversation:;
+ (id)shareInstance;
@end
