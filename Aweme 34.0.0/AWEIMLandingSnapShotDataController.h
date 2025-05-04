@interface AWEIMLandingSnapShotDataController : NSObject
@property (nonatomic) BOOL hasLocoalOfficialUnRead;
@property (nonatomic) NSArray snapShotChatList;
@property (nonatomic) NSMutableDictionary locoalOfficialSnapShotChat;
- (void)clearMemoryData;
- (BOOL)hasLocoalSnapShotUnreadOfficialChat;
- (id)snapShotLocoalOfficalChatFor:;
- (id)snapShotChatList;
- (BOOL)hasLocoalOfficialUnRead;
- (id)locoalOfficialSnapShotChat;
- (BOOL)p_isOfficalChatNeedInsert:;
- (void)setSnapShotChatList:;
- (void)setLocoalOfficialSnapShotChat:;
- (void)setHasLocoalOfficialUnRead:;
- (id)p_stringResultForTabs:;
- (void)loadSDKDataFinishedWithRemoteOfficalChat:;
- (void)loadOfficalChatFinishedWithSDKFinished:;
- (void)storeLastTabSkeleton:;
- (void)storeSnapShotDate;
- (double)getLastStoredSnapShotDate;
- (BOOL)isTabSkeletonMatch:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
