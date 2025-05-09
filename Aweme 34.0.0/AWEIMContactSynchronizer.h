@interface AWEIMContactSynchronizer : NSObject
@property (nonatomic) double lastMaxTime;
@property (nonatomic) NSOperationQueue processQueue;
@property (nonatomic) <IESIMHttpTask> currentTask;
@property (nonatomic) q synchronyState;
@property (nonatomic) <AWEIMContactSynchronizerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLCMessageHandlerProtocol> messageHandler;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)ieslc_messageHandler:didReceiveMsg:;
- (void)applicationDidBecomeActiveNoti:;
- (void)setProcessQueue:;
- (void)applicationWillResignActiveNoti:;
- (void)setupSynchronizerWithContext:;
- (long long)synchronyState;
- (void)p_configProcessQueue;
- (BOOL)p_loadWholeContactListWithContext:;
- (long long)coldupUpdateInterval;
- (BOOL)p_beyondInterval:source:;
- (void)p_appendNewContactListWithEntrance:context:;
- (long long)fontUpdateInterval;
- (void)p_handlerPushMessage;
- (long long)frontierUpdateInterval;
- (void)resetLastMaxTime;
- (void)resetLastSyncContactTime;
- (void)p_resetSynchronyState;
- (void)setSynchronyState:;
- (double)lastSyncContactTimestampWithSource:;
- (long long)wholeLoadInterval;
- (BOOL)isAbnormalShareSortedNeedFetch:;
- (void)p_prepareDownloadContactsWithParam:context:;
- (double)lastMaxTime;
- (void)p_trackDBInfoForParam:netStage:saveStage:count:requestStatus:saveStatus:;
- (BOOL)isAbnormalSorted;
- (void)storeAbnormalShareSortedFetchInfo:;
- (void)setIsAbnormalSorted:;
- (void)setIsAbnormalRecentShare:;
- (void)setLastSyncContactTimestamp:source:;
- (void)p_updateRemoveSharePanelList:uid:;
- (void)setLastMaxTime:;
- (void)extractHotsoonHideTextWithDict:;
- (id)p_downloadContactsWithParam:context:completion:;
- (id)imContactUpdateFreqConfig;
- (id)p_shareSortAbnormalKey;
- (id)p_shareRecentShareAbnormalKey;
- (id)p_shareSortDateKey;
- (id)p_shareSortCountKey;
- (id)init;
- (void)dealloc;
- (id)delegate;
- (id)currentTask;
- (void)setCurrentTask:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)processQueue;
@end
