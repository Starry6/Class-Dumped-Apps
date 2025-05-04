@interface AWEIMGroupMemberRecommendDataManager : NSObject
@property (nonatomic) q remainingInvitableFansCount;
@property (nonatomic) NSArray recommendList;
@property (nonatomic) NSString inviteGroupID;
- (id)recommendList;
- (void)setRecommendList:;
- (void)setRemainingInvitableFansCount:;
- (long long)remainingInvitableFansCount;
- (id)inviteGroupID;
- (void)setInviteGroupID:;
- (long long)__IndexForRecommendUserModel:;
- (void)__removeRecommendFromRecommendListAtIndex:;
- (void)fetchIMFansGroupRecommendMemberListWithLimit:completion:;
- (void)sendInviteCardToUserWithModel:;
- (void)ackRecommendWithRefuseUserModel:;
- (void)updateRecommendUserModel:hasBeenInvited:;
- (void)deleteRecommendUserModel:;
- (void).cxx_destruct;
@end
