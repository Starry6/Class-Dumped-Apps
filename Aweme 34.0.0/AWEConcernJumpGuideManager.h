@interface AWEConcernJumpGuideManager : NSObject
@property (nonatomic) NSString feedJumpFollowAuthorID;
@property (nonatomic) NSString feedJumpFollowItemID;
- (id)feedJumpFollowAuthorID;
- (id)feedJumpFollowItemID;
- (void)clearLastJumpInfo;
- (void)setFeedJumpFollowAuthorID:;
- (void)setFeedJumpFollowItemID:;
- (void)feedJumpFollowWithAuthorID:andItemID:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
