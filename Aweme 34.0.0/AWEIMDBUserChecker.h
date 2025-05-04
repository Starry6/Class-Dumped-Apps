@interface AWEIMDBUserChecker : NSObject
@property (nonatomic) AWEIMUserDatabase database;
@property (nonatomic) NSMutableArray fetchUsersSessions;
@property (nonatomic) BOOL enableClearUserData;
@property (nonatomic) NSObject<OS_dispatch_queue> checkerQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateFollowUsersForFullUpdate;
- (void)deleteUsersBeyoundMinute:;
- (id)checkerQueue;
- (void)setCheckerQueue:;
- (void)batchFetchUserSessionDidFinished:;
- (void)preparCheckerAction;
- (void)deleteErrorDataIfNeed;
- (unsigned long long)p_expireTimestampForMinute:;
- (id)p_needUpdateFollowUsersBeyoundUpdateTimeMinute:;
- (id)fetchUsersSessions;
- (BOOL)enableClearUserData;
- (id)initWithDB:;
- (void)setFetchUsersSessions:;
- (void)setEnableClearUserData:;
- (void)setDatabase:;
- (id)database;
- (void).cxx_destruct;
@end
