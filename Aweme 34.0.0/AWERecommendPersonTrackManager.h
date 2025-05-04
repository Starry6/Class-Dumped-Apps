@interface AWERecommendPersonTrackManager : NSObject
@property (nonatomic) NSMutableArray recommendPersons;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (void)addTrackNode:;
- (void)cleanTrackNodes;
- (void)saveTrackNodes;
- (id)recommendPersons;
- (void)saveTrackNodesWithArray:;
- (void)setRecommendPersons:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)registerNotifications;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)trackNodes;
- (void)unregisterNotifications;
+ (void)viewRecommendPersonWithReferString:userID:;
+ (id)recommendUsers;
+ (void)recordRecommendImpressionWithUserID:isItem:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
+ (void)save;
+ (void)clean;
@end
