@interface AWELeftSideBarRevisitUserCacheManager : NSObject
@property (nonatomic) NSMutableDictionary memoryCacheMap;
@property (nonatomic) NSArray videoPlayReferingWhiteList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)videoStartPlaySucceed:;
- (BOOL)supportReferingHandleUnreadWhenVideoPlay:;
- (BOOL)isUnreadWithFollowingUserID:item:;
- (void)markReadStatusWithUser:itemIdList:completion:;
- (id)videoPlayReferingWhiteList;
- (id)awemeIDsWithFollowingUserID:;
- (void)updateAwemeIDsWithFollowingUserID:items:;
- (void)uploadReadStatusWithType:itemIdList:completion:;
- (void)setMemoryCacheMap:;
- (id)memoryCacheMap;
- (id)diffNotExistAwemeIDsWithUser:diffTargetItems:responseItems:;
- (void)updateNotExistAwemeIDsWithUser:itemIdList:completion:;
- (void)setVideoPlayReferingWhiteList:;
- (void)updateRevisitUserCellReadPoint:;
- (void)clearCache;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
