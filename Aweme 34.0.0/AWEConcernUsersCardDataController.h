@interface AWEConcernUsersCardDataController : NSObject
@property (nonatomic) NSMutableArray userQueue;
@property (nonatomic) NSObject<AWEUserRecommendDataControllerProtocol> recommendPersonDataController;
@property (nonatomic) BOOL initialFetchedRecommendPerson;
- (void)fillCacheQueueFor:usersWithCompletionBlock:;
- (id)recommendPersonDataController;
- (BOOL)initialFetchedRecommendPerson;
- (void)setInitialFetchedRecommendPerson:;
- (void)fetchNext:usersFromOffset:withCompletionBlock:;
- (void)setRecommendPersonDataController:;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)setUserQueue:;
- (id)userQueue;
@end
