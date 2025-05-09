@interface AWEIMFTSDataSyncManager : NSObject
@property (nonatomic) IESIMStorage storage;
@property (nonatomic) NSObject<OS_dispatch_queue> storageQueue;
@property (nonatomic) NSObject<OS_dispatch_semaphore> isSyncingSemaphore;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} isSyncingMutex;
@property (nonatomic) NSTimer syncUserTimer;
@property (nonatomic) BOOL isSyncingUserDatas;
@property (nonatomic) NSObject<OS_dispatch_queue> syncUserQueue;
@property (nonatomic) NSObject<OS_dispatch_semaphore> syncUserSemaphore;
@property (nonatomic) NSTimer syncConversationTimer;
@property (nonatomic) BOOL isSyncingConversationDatas;
@property (nonatomic) NSObject<OS_dispatch_queue> syncConversationQueue;
@property (nonatomic) NSObject<OS_dispatch_semaphore> syncConversationSemaphore;
@property (nonatomic) NSTimer syncMessageTimer;
@property (nonatomic) BOOL isSyncingMessageDatas;
@property (nonatomic) NSObject<OS_dispatch_queue> syncMessageQueue;
@property (nonatomic) NSObject<OS_dispatch_semaphore> syncMessageSemaphore;
@property (nonatomic) NSTimer syncParticipantTimer;
@property (nonatomic) BOOL isSyncingParticipantDatas;
@property (nonatomic) NSObject<OS_dispatch_queue> syncParticipantQueue;
@property (nonatomic) NSObject<OS_dispatch_semaphore> syncParticipantSemaphore;
@property (nonatomic) BOOL hasRollbackMultiMessages;
@property (nonatomic) BOOL hasSyncFirstPageMultiMessages;
@property (nonatomic) NSObject<OS_dispatch_semaphore> lastChatTimeSemaphore;
@property (nonatomic) NSMutableDictionary convPeerUidLastChatTimeMap;
@property (nonatomic) @? filterUsersBlock;
@property (nonatomic) @? filterOfficialChatBlock;
@property (nonatomic) @? filterConversationBlock;
@property (nonatomic) @? filterMessageBlock;
@property (nonatomic) @? filterFTSMessageInfoBlock;
@property (nonatomic) @? filterParticipantBlock;
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
- (id)storageKey;
- (void)didLoadNewMessages:;
- (void)didLoadOfficialChats:;
- (void)setupForCurrentUser;
- (void)didDeleteUserOfUid:;
- (void)didSaveUsers:;
- (void)didClearAllUsers;
- (id)convPeerUidLastChatTimeMap;
- (void)setConvPeerUidLastChatTimeMap:;
- (void)syncAllConversationsIfNeed;
- (void)syncAllUsersIfNeed;
- (void)syncAllMessagesIfNeed;
- (void)syncUserDatasAfterSetUpFTSDBFinished;
- (void)syncMessageDatasAfterSetUpFTSDBFinished;
- (void)syncParticipantDatasAfterSetUpFTSDBFinished;
- (void)syncConversationDatasAfterSetUpFTSDBFinished;
- (void)recalculateAllUserDatasSortOrderIfNeed;
- (void)syncSaveUsers:;
- (void)syncSaveParticipantsByUsers:;
- (void)syncDeleteUid:;
- (void)syncDeleteParticipantsByUid:;
- (void)syncClearAllUsers;
- (void)syncClearAllParticipants;
- (void)syncSaveMessageIds:conversationMap:;
- (void)syncMessageDeleteByIds:;
- (void)removeUidLastChatTimeByConversationIds:;
- (void)syncMessageDeleteByConvIds:;
- (void)syncUsersWhenChatsDelete:;
- (void)syncDeleteParticipantsByConversationIds:;
- (void)syncDeleteGroupConversationIds:;
- (void)updateUidLastChatTimeWithConversations:;
- (void)syncUsersWhenSaveChats:;
- (void)syncSaveGroupConversations:;
- (void)syncSaveParticipantsByConversations:;
- (id)syncUserQueue;
- (void)syncSaveMessages:;
- (void)syncLoadOfficialChats:;
- (void)storageAndSyncUserDatas:;
- (id)syncUserSemaphore;
- (void)tryToSyncStorageUserDatas:;
- (id)storageDatas:withKey:semaphore:;
- (id)isSyncingSemaphore;
- (BOOL)isSyncingUserDatas;
- (void)setUpFTSDBFinished;
- (void)setIsSyncingUserDatas:;
- (id)clipSyncDatas:;
- (void)setTimerWithUserDatas:;
- (void)syncStorageUserDatasDelay:;
- (void)setSyncUserTimer:;
- (id)subrangeStorageDatasWithCount:key:semaphore:;
- (void)filterAndSyncStorageUsers:completion:;
- (void)syncStorageUsers:;
- (void)filterAndSyncStorageUsers:;
- (id)filterUsersBlock;
- (long long)getExtTypeFromUser:;
- (id)lastChatTimeOfUid:;
- (id)getPeerUserFromOneToOneChatOfSessionID:;
- (id)getSyncStorageUsersDatasWithUserDict:;
- (void)storageAndSyncConversationDatas:;
- (id)syncConversationSemaphore;
- (void)tryToSyncStorageConversationDatas:;
- (BOOL)isSyncingConversationDatas;
- (void)setIsSyncingConversationDatas:;
- (void)setTimerWithConversationDatas:;
- (void)syncStorageConversationDatasDelay:;
- (void)setSyncConversationTimer:;
- (id)syncConversationQueue;
- (void)filterAndSyncStorageConversations:completion:;
- (void)syncStorageConversations:;
- (void)filterAndSyncStorageConversations:;
- (id)filterConversationBlock;
- (BOOL)hasSyncFirstPageMultiMessages;
- (void)syncSaveFTSMessageInfos:;
- (void)setHasSyncFirstPageMultiMessages:;
- (void)storageAndSyncMessageDatas:;
- (id)syncMessageSemaphore;
- (void)tryToSyncStorageMessagesDatas:;
- (BOOL)isSyncingMessageDatas;
- (void)setIsSyncingMessageDatas:;
- (void)setTimerWithMessagesDatas:;
- (void)syncStorageMessagesDatasDelay:;
- (void)setSyncMessageTimer:;
- (id)syncMessageQueue;
- (void)filterAndSyncStorageMessages:completion:;
- (void)syncStorageMessages:;
- (void)filterAndSyncStorageMessages:;
- (id)filterMessageBlock;
- (id)filterFTSMessageInfoBlock;
- (void)storageAndSyncParticipantDatas:;
- (id)syncParticipantSemaphore;
- (void)tryToSyncStorageParticipantDatas:;
- (BOOL)isSyncingParticipantDatas;
- (void)setIsSyncingParticipantDatas:;
- (void)setTimerWithParticipantDatas:;
- (void)syncStorageParticipantDatasDelay:;
- (void)setSyncParticipantTimer:;
- (id)syncParticipantQueue;
- (void)filterAndSyncStorageParticipants:completion:;
- (void)syncStorageParticipants:;
- (id)filterParticipantBlock;
- (void)filterAndSyncStorageParticipants:;
- (id)createFTSDatasFromParticipant:;
- (id)createParticipantDatasFromUid:convId:timestamp:;
- (void)batchSyncAllConversationsIfNeed;
- (void)batchSyncAllUsersIfNeed;
- (void)batchSyncAllMultipleMsg;
- (void)batchSyncAllMessagesIfNeedOpt;
- (BOOL)hasRollbackMultiMessages;
- (void)setHasRollbackMultiMessages:;
- (void)logStorageDatas:key:;
- (id)lastChatTimeSemaphore;
- (void)syncFirstPageMultiMessagesIfNeed;
- (void)rollbackMultiMessagesIfNeed;
- (BOOL)hasSyncAllMultipleMessages;
- (void)messageIntegrityCheck;
- (void)setIsSyncingSemaphore:;
- (id)isSyncingMutex;
- (void)setIsSyncingMutex:;
- (id)syncUserTimer;
- (void)setSyncUserQueue:;
- (void)setSyncUserSemaphore:;
- (id)syncConversationTimer;
- (void)setSyncConversationQueue:;
- (void)setSyncConversationSemaphore:;
- (id)syncMessageTimer;
- (void)setSyncMessageQueue:;
- (void)setSyncMessageSemaphore:;
- (id)syncParticipantTimer;
- (void)setSyncParticipantQueue:;
- (void)setSyncParticipantSemaphore:;
- (void)setLastChatTimeSemaphore:;
- (void)setFilterUsersBlock:;
- (id)filterOfficialChatBlock;
- (void)setFilterOfficialChatBlock:;
- (void)setFilterConversationBlock:;
- (void)setFilterMessageBlock:;
- (void)setFilterFTSMessageInfoBlock:;
- (void)setFilterParticipantBlock:;
- (void)setStorage:;
- (id)init;
- (id)storage;
- (void)dealloc;
- (void).cxx_destruct;
- (id)storageQueue;
- (void)setStorageQueue:;
+ (id)syncMessageTypes;
+ (id)createFTSDatasFromUser:withExtType:;
+ (id)createFTSDatasFromChatModel:;
+ (BOOL)hasFollowRelation:;
+ (BOOL)hasParticipantRelationWithUser:;
+ (id)createFTSDataWithUser:content:contentType:extType:deleted:;
+ (id)firstLettersJoinBySpaceOfPinyin:origin:;
+ (id)createFTSDataWithChatModel:content:contentType:;
+ (id)createFTSDatasFromConversation:;
+ (id)createFTSDataWithConversation:content:contentType:;
+ (id)createFTSDatasFromMessage:;
+ (id)createFTSDatasFromFTSMessageInfo:;
+ (id)getParticipantContentDictWithUser:;
+ (id)sharedInstance;
@end
