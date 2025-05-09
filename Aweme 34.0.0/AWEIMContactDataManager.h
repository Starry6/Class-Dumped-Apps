@interface AWEIMContactDataManager : NSObject
@property (nonatomic) AWEIMContactSynchronizer contactSynchronizer;
@property (nonatomic) NSMutableSet pendingContactListCompletionBlocks;
@property (nonatomic) q lastFriendIdx;
@property (nonatomic) AWEIMBatchFetchUserSession fetchPrivateLiveUserSession;
@property (nonatomic) NSArray remoteUsers;
@property (nonatomic) <AWEIMContactUserManagerProtocol> userManager;
@property (nonatomic) HMDThreadSafeDictionary currentRequestDict;
@property (nonatomic) NSArray strangerModelList;
@property (nonatomic) BOOL isDownloadingWholeContacts;
@property (nonatomic) BOOL needAddressBookFriend;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (void)didFinishUpdateAwemeUser;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishBlockUser:status:;
- (void)didFinishUnBlockUser:status:;
- (void)didFinishHidePostFromHer:status:;
- (void)didFinishUnHidePostFromHer:status:;
- (void)willFinishCloseFriendsWithUser:status:;
- (void)didFinishSetRemarkWithUser:;
- (void)fetchWholeContactAndRecentContactList:;
- (id)saveAweUser:forOwnerID:dataFrom:;
- (BOOL)isGroupInChatList:;
- (BOOL)isFriend:;
- (void)fetchAfterPublishShareModelList:filterNotFriendUser:filterExclusionSecUidList:;
- (id)userManager;
- (void)fetchTranspondShareModelList:configs:;
- (void)fetchTranspondShareResponseModel:configs:;
- (void)fetchWholeContactList:;
- (void)setUserManager:;
- (void)queryUser:secUserID:completion:;
- (void)addUser:secUserID:detailCompletion:;
- (unsigned long long)maxTranspondShareUserCount;
- (void)batchFetchUserSessionDidFinished:;
- (void)setupContactDataManagerWithContext:;
- (void)fetchTranspondShareModelList:filterNotFriendUser:needAddressBookFriend:;
- (BOOL)didShowedTranspondFilterNotFriendUser:;
- (void)fetchSpecifyTranspondShareModelList:specificationUserDic:;
- (void)fetchContactListLimit:complete:;
- (void)p_didFinishLogout;
- (void)addUser:secUserID:completion:;
- (id)contactSynchronizer;
- (void)_fetchLocalContactList:;
- (void)_fetchLocalContactListLimit:complete:;
- (void)_fetchWholeContactAndRecentContactList:;
- (id)remoteUsers;
- (id)fetchPrivateLiveUserSession;
- (void)setFetchPrivateLiveUserSession:;
- (id)shareModelListWithLimitCount:shareModelList:;
- (void)p_getUserProfile:secUserID:detailCompletion:;
- (id)p_saveAweUser:forOwnerID:toDB:dataFrom:;
- (id)currentRequestDict;
- (id)pendingContactListCompletionBlocks;
- (id)_recentContactListFromContactList;
- (void)p_updateIMUserPostFromHerStatusWithUserID:status:;
- (void)p_updateIMUserBlockStatus:status:;
- (void)setRemoteUsers:;
- (void)setStrangerModelList:;
- (id)strangerModelList;
- (void)contactSynchronyComplete;
- (BOOL)isDownloadingWholeContacts;
- (BOOL)needAddressBookFriend;
- (long long)lastFriendIdx;
- (void)setLastFriendIdx:;
- (void)setContactSynchronizer:;
- (void)setPendingContactListCompletionBlocks:;
- (void)setCurrentRequestDict:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)filterNotFriendUser:;
+ (BOOL)shouldBeFilteredWhenGameIncentive:;
+ (id)filterSelfForList:;
+ (id)filterExclusionUser:filterExclusionUidList:;
+ (id)filterBlockedUser:;
+ (id)sharedInstance;
@end
