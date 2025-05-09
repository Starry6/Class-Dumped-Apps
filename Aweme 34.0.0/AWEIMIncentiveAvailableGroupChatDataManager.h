@interface AWEIMIncentiveAvailableGroupChatDataManager : NSObject
@property (nonatomic) NSMutableSet incentiveTotalAvailableGroupChat;
@property (nonatomic) NSMutableSet signOnGroupChatBeforeLoadDataFromStorage;
@property (nonatomic) NSSet remoteConvList;
@property (nonatomic) AWEIMIncentiveFetchAvailableGroupChatFromDBManager fetchLocalAvailableDataFromDBManager;
@property (nonatomic) BOOL hasInitAvailableGroupLocalData;
@property (nonatomic) BOOL hasInitAvailableGroupRemoteData;
@property (nonatomic) BOOL hasStartFetchRemoteData;
@property (nonatomic) BOOL hasStartFetchLocalDBData;
@property (nonatomic) BOOL hasLoadStorageData;
@property (nonatomic) NSString loginUid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)iesim_chatDataManager:chatListDidUpdateWithDeletedChats:insertedChats:firstPage:reason:;
- (void)iesim_chatDataManager:totalUnreadCountUpdate:;
- (void)iesim_chatDataManager:chatDidUpdate:;
- (void)iesim_chatDataManager:chatsDidUpdate:;
- (void)p_setup;
- (void)setLoginUid:;
- (id)loginUid;
- (void)p_addListener;
- (void)getAvailableGroupChatFromLocalCache;
- (id)incentiveTotalAvailableGroupChat;
- (BOOL)hasStartFetchRemoteData;
- (void)setHasStartFetchRemoteData:;
- (void)p_getRemoteData:;
- (BOOL)hasStartFetchLocalDBData;
- (void)setHasStartFetchLocalDBData:;
- (void)p_getLocalData;
- (BOOL)p_shouldScanDB;
- (id)fetchLocalAvailableDataFromDBManager;
- (void)mergeAvailableChatDataWithSourceType:data:;
- (BOOL)p_enableScanDBToGetAvailableGroupChat;
- (long long)p_scanDBTimeInterval;
- (void)setRemoteConvList:;
- (void)checkGroupIsAvailableWithConvArray:afterFilterArray:lastOrder:completion:;
- (void)setHasInitAvailableGroupLocalData:;
- (void)setHasInitAvailableGroupRemoteData:;
- (void)updateLocalAvailableGroupChatCache;
- (void)p_sendAvailableGroupChatNotifyWithIsAdd:;
- (BOOL)hasInitAvailableGroupLocalData;
- (BOOL)hasInitAvailableGroupRemoteData;
- (void)handleAvailableLocalAndRemoteGroupChatFinish;
- (void)checkGroupIsUnAvailableWithConvArray:unAvailableArray:lastOrder:completion:;
- (void)updateAvailableGroupChatToServerIfNeedWithUpdateType:;
- (void)p_handleConversationDidUpdateWithCon:;
- (BOOL)hasLoadStorageData;
- (id)signOnGroupChatBeforeLoadDataFromStorage;
- (void)setHasLoadStorageData:;
- (void)setSignOnGroupChatBeforeLoadDataFromStorage:;
- (BOOL)p_enableUpdateToServerWithUpdateType:;
- (id)remoteConvList;
- (id)getAvailableGroupConvArray;
- (void)startAppendRemoteData:;
- (void)startAppendLocalDBData;
- (id)p_getIncentiveChatData;
- (void)setIncentiveTotalAvailableGroupChat:;
- (void)setFetchLocalAvailableDataFromDBManager:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)p_cacheKeyWithBizType:loginUid:;
+ (BOOL)isValidConversationWithCon:;
@end
