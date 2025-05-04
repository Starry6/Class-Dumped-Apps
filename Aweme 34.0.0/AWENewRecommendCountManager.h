@interface AWENewRecommendCountManager : NSObject
@property (nonatomic) q count;
@property (nonatomic) q friendsTabCount;
@property (nonatomic) NSArray users;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (long long)countForSource:;
- (void)fetchCountWithSource:networkContext:completion:;
- (long long)friendsTabCount;
- (BOOL)p_shouldBlockSource:;
- (void)setFriendsTabCount:;
- (id)init;
- (void)dealloc;
- (void)setCount:;
- (id)users;
- (long long)count;
- (void).cxx_destruct;
- (void)reset;
- (void)setUsers:;
+ (id)sharedInstance;
@end
