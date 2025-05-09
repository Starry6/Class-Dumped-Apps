@interface AWEIMDYOfficialDataManager : NSObject
@property (nonatomic) BOOL shouldFetchRemoteWhenEnterMessageTab;
@property (nonatomic) NSString filepath;
@property (nonatomic) <AWEIMDYNotificationGroupDataControllerProtocol> groupDataController;
@property (nonatomic) NSArray chatGroup;
@property (nonatomic) NSArray noticeResponseModels;
@property (nonatomic) <AWEIMOfficialDataManagerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogout;
- (void)p_mark_officialModelDeleteDate:;
- (id)chatGroup;
- (id)chatModelForGroup:;
- (void)didFinishLogin;
- (id)groupDataController;
- (void)handleAddFakeOfficialNoti:;
- (void)handleMessageNoti:;
- (void)handleUpdateInteractionNoticeUnreadCount;
- (void)handleUpdateOfficialNoti:;
- (BOOL)hasGroup:;
- (BOOL)hasSessionID:;
- (id)interationModels;
- (BOOL)isInterationForGroup:;
- (BOOL)isMigrateForGroup:;
- (BOOL)isShopNotice:;
- (id)localOfficialChats;
- (void)monitorInfoWithGroups:requsetID:isUnread:;
- (void)monitorInfoWithModels:requsetID:;
- (id)noticeResponseModels;
- (id)officalChatWithSessionId:;
- (id)officialModelMap;
- (void)onRecallMsgChange;
- (void)p_addObserver;
- (void)p_clearAllOfficialChat;
- (id)p_converChatModelForFansPushNotiModel:;
- (id)p_converChatModelForInterationNotiModel:;
- (id)p_converChatModelForMigrateNotiModel:;
- (id)p_converChatModelForNotiResponseModel:;
- (id)p_converChatModelForShopNotiModel:;
- (void)p_deleteOfficialChat:;
- (void)p_fetchRemoteOfficialChats;
- (id)p_localKeyWithOfficialDeleteWithChat:;
- (long long)p_officialModelDeleteDate:;
- (void)p_removeCache;
- (void)p_removeObserver;
- (void)p_updateChatModel:;
- (id)p_updateFansPushOfficialChatWithNotiModel:;
- (id)p_updateInterationOfficialChatWithNotiModel:;
- (id)p_updateMigrateOfficialChatWithNotiModel:;
- (id)p_updateNormalOfficialChatWithNotiModel:;
- (id)p_updateShopOfficialChatWithNotiModel:;
- (void)readOfficialChat:;
- (void)removeAllOfficialChat;
- (void)removeOfficialChat:;
- (void)setChatGroup:;
- (void)setFilepath:;
- (void)setGroupDataController:;
- (void)setNoticeResponseModels:;
- (void)setShouldFetchRemoteWhenEnterMessageTab:;
- (BOOL)shouldFetchRemoteWhenEnterMessageTab;
- (void)tryToFetchRemoteData;
- (void)updateExistChatModelWithGroupID:pushModel:;
- (void)updateOfficialChat:;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)filepath;
@end
