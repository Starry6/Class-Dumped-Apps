@interface AWEVideoNewFriendsDailyPublishBeforeStatusManager : NSObject
@property (nonatomic) BOOL isFinishedLoadLastSelectedUsersCacheBlockStatus;
@property (nonatomic) BOOL isFinishedFetchLastSelectedUsersBlockStatus;
@property (nonatomic) NSArray friendsRelativeList;
@property (nonatomic) NSArray mateRelativeList;
- (id)friendsRelativeList;
- (id)mateRelativeList;
- (void)setFriendsRelativeList:;
- (void)setMateRelativeList:;
- (void)setIsFinishedLoadLastSelectedUsersCacheBlockStatus:;
- (void)setIsFinishedFetchLastSelectedUsersBlockStatus:;
- (BOOL)isFinishedLoadLastSelectedUsersCacheBlockStatus;
- (BOOL)isFinishedFetchLastSelectedUsersBlockStatus;
- (void).cxx_destruct;
- (void)reset;
+ (id)sharedInstance;
@end
