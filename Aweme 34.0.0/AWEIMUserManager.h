@interface AWEIMUserManager : NSObject
@property (nonatomic) NSMutableSet fetchingUserSet;
@property (nonatomic) NSMutableArray sessions;
@property (nonatomic) NSMutableArray waitRequestQueue;
@property (nonatomic) NSMutableDictionary userCompletionDict;
@property (nonatomic) NSCache userCache;
@property (nonatomic) NSMapTable userMapTable;
@property (nonatomic) NSMapTable secUIDUserMapTable;
@property (nonatomic) NSObject<OS_dispatch_semaphore> userMapTableLock;
@property (nonatomic) NSTimer timer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (void)didFinishSetRemarkWithUser:;
- (id)localCachedUserForUserID:;
- (void)fetchUserWithUserID:secUserID:source:completion:;
- (id)userVMForUserID:secUserID:;
- (id)getUserFromCacheWithUserID:;
- (id)getUserFromCacheWithSecUID:;
- (void)queryUserVMForUserID:secUserID:extraParams:completion:;
- (void)queryIMUserVMForUserID:secUserID:extraParams:completion:;
- (void)fetchIMUser:secUserID:extraParams:completion:;
- (void)fetchIMUser:secUserID:extraParams:completionWithOwnerID:;
- (void)fetchUser:secUserID:completion:;
- (void)fetchUser:secUserID:extraParams:completion:;
- (void)immediatelyQueryIMUserForUserID:secUserID:extraParams:completion:;
- (void)getIMUserWithUserID:secUserID:option:extraParams:completion:;
- (void)getIMUsersWithUserIDs:option:extraParams:completion:;
- (void)getIMUsersWithSecUIDs:option:extraParams:completion:;
- (void)fetchIMUser:secUserID:completion:;
- (void)didSaveUsers:;
- (void)batchFetchUserSessionDidFinished:;
- (void)setUserCache:;
- (void)userDetailUpdateNotification:;
- (void)lockMapTable;
- (id)userMapTable;
- (void)unlockMapTable;
- (id)secUIDUserMapTable;
- (void)immediatelyFetchIMUser:secUserID:extraParams:completion:;
- (void)p_fetchIMUserWithUserID:secUserID:extraParams:completion:;
- (void)p_featchIMUserWithSecUserID:extraParams:completion:;
- (void)p_immediatelyFeatchIMUserWithUserID:secUserID:extraParams:completion:;
- (void)p_fetchSingleUser:secUserID:extraParams:completion:;
- (void)trackGetIMUserMethodWithFrom:Source:Success:;
- (void)p_saveIMUser:forOwnerID:withOption:dataFrom:;
- (id)__fetchFullDetailUserWithUidArray:extraParams:;
- (id)__mergeUserArray:withFetchResult:;
- (id)__batchFetchUserWithUidArray:extraParams:;
- (id)__fetchFullDetailUserWithSecUIDArray:extraParams:;
- (id)waitRequestQueue;
- (id)userCompletionDict;
- (id)fetchingUserSet;
- (id)p_saveIMUser:dataFrom:forOwnerSecID:;
- (id)p_saveIMUser:dataFrom:forOwnerID:;
- (void)p_updateUserVM:;
- (void)addCompletionBlock:toUser:;
- (void)p_getIMUserFromServerWithSecUserID:extraParams:completion:;
- (id)p_saveAweUser:dataFrom:forOwnerID:;
- (void)p_getUserProfileWithSecUserID:extraParams:detailCompletion:;
- (void)p_getUserProfileWithSecUserID:cacheStrategy:cacheMaxAge:extraParams:detailCompletion:;
- (id)userMapTableLock;
- (void)setFetchingUserSet:;
- (void)setWaitRequestQueue:;
- (void)setUserCompletionDict:;
- (void)setUserMapTable:;
- (void)setSecUIDUserMapTable:;
- (void)setUserMapTableLock:;
- (id)sessions;
- (void)setTimer:;
- (id)init;
- (void)dealloc;
- (id)timer;
- (void).cxx_destruct;
- (void)setSessions:;
- (void)timerFired:;
- (id)userCache;
+ (id)sharedManager;
@end
