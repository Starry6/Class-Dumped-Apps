@interface AWEIMFTSComplexDataSyncManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_semaphore> semaphore;
@property (nonatomic) NSMutableDictionary convPeerUidLastChatTimeMap;
@property (nonatomic) NSMutableDictionary convIDToLastChatTimeMap;
@property (nonatomic) BOOL convPeerUidLastChatTimeMapReady;
@property (nonatomic) AWEIMBatchFetchUserSession fetchUserSession;
@property (nonatomic) IESIMStorage messageSyncTimeStore;
@property (nonatomic) IESIMFTSDataManager dataManager;
@property (nonatomic) AWEIMFTSComplexDataCache dataCache;
@property (nonatomic) <AWEIMFTSTrackProtocol> trackCenter;
@property (nonatomic) q nextUpdateTime;
@property (nonatomic) NSObject<OS_dispatch_queue> userQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)iesim_onConversationDataSourceMessagesCreated:belongingConversationMap:reason:;
- (void)iesim_chatDataManager:chatDidUpdate:;
- (void)iesim_onConversationDataSourceConversationsDeleted:;
- (void)iesim_onConversationDataSourceMessagesUpdated:belongingConversationMap:;
- (void)iesim_onConversationDataSourceMessagesDeleted:belongingConversationMap:;
- (void)iesim_onConversationDataSourceConversationCleared:;
- (void)iesim_chatDataManager:chatListDidUpdateWithRealDeletedChats:notDisplayChats:insertedChats:firstPage:reason:;
- (id)trackCenter;
- (void)setTrackCenter:;
- (void)didLoadNewMessages:;
- (void)didLoadOfficialChats:;
- (id)initWithDataManager:dataCache:trackCenter:;
- (id)initWithDataManager:dataCache:;
- (void)didDeleteUserOfUid:;
- (id)convPeerUidLastChatTimeDict;
- (id)convIDToLastChatTimeDict;
- (void)setConvPeerUidLastChatTimeMapReady:;
- (void)didSaveUsers:;
- (void)didClearAllUsers;
- (void)migrateFriendsDataIfNeed;
- (id)convPeerUidLastChatTimeMap;
- (void)insertFTSDataWithMessageList:;
- (void)syncOfficialDataList:;
- (id)transFTSDataForMessageObject:;
- (id)lastMessageSyncTimestampKeyForType:;
- (id)messageSyncTimeStore;
- (id)messageTypeKeyMap;
- (void)p_migrateFriendData_old;
- (long long)latestSyncFTSDataTimeOfType:extType:;
- (void)cacheLatestSyncFTSDataTime:type:extType:;
- (id)p_generateSyncId;
- (void)syncFriendsDataList:completion:;
- (void)syncFriendsDataList:;
- (BOOL)convPeerUidLastChatTimeMapReady;
- (void)syncParticipantDataList:completion:;
- (void)syncParticipantDataList:;
- (id)lastChatTimeOfUser:;
- (BOOL)p_hasFollowRelation:;
- (void)syncUsersDataList:filterBlock:completion:;
- (id)p_FTSTableItemsWithUser:;
- (void)p_configFTSData:withUser:;
- (id)p_firstLettersJoinBySpaceOfPinyin:origin:;
- (void)__syncOfficialDataList:;
- (id)createFTSData:contentType:conent:;
- (id)convIDToLastChatTimeMap;
- (void)syncGroupConversationDataList:;
- (void)p_configFTSData:withConvORM:;
- (void)p_configFTSData:withConv:;
- (void)syncGroupConversationDataList:completion:;
- (void)setFetchUserSession:;
- (id)fetchUserSession;
- (void)p_didSyncNormalConversationDataList;
- (void)syncNormalConversationDataList:completion:;
- (void)migrateParticipantDataIfNeed;
- (void)insertFTSDataWithMessage:;
- (void)syncConversationData:;
- (void)syncAllConversationFromDB;
- (void)removeConversationsData:;
- (void)removeFriendData:;
- (BOOL)p_hasParticipantRelationWithUser:;
- (BOOL)p_conversationORMShouldCareOnFullUpdate:;
- (void)p_syncGroupConversationORMLastChatTime:;
- (void)syncGroupConversationORMDataList:completion:;
- (void)syncNormalConversationORMDataList:latestUpdateTime:hasMore:completion:;
- (long long)nextUpdateTime;
- (void)syncMessagesFTSDatas;
- (BOOL)p_conversationShouldCareOnFullUpdate:;
- (void)p_syncGroupConversationLastChatTime:;
- (void)syncNormalConversationDataList:latestUpdateTime:hasMore:completion:;
- (void)syncNormalConversationDataList:latestUpdateTime:hasMore:;
- (void)setNextUpdateTime:;
- (void)__didSaveUsers:;
- (void)syncUsersDataList:filterBlock:;
- (void)removeAllFriendData;
- (id)latestSyncFTSDataKeyOfType:extType:;
- (void)batchFetchUserSessionDidFinished:;
- (void)syncFriendsData:;
- (void)removeAllConversationData;
- (void)syncNormalConversationDataList:;
- (void)setConvPeerUidLastChatTimeMap:;
- (void)setConvIDToLastChatTimeMap:;
- (void)setMessageSyncTimeStore:;
- (id)semaphore;
- (void)dealloc;
- (id)dataManager;
- (id)dataCache;
- (void)setDataManager:;
- (void)setSemaphore:;
- (void).cxx_destruct;
- (void)setUserQueue:;
- (id)userQueue;
- (void)setDataCache:;
+ (id)messageQueue;
@end
