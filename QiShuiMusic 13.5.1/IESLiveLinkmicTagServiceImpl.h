@interface IESLiveLinkmicTagServiceImpl : NSObject
@property (nonatomic) <IESLiveLinkmicTagCombined> tagCombined;
@property (nonatomic) NSMutableSet honorBadgeSet;
@property (nonatomic) NSMutableSet liveRoleSet;
@property (nonatomic) NSMutableSet basicSet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTagCombined:;
- (id)mergeHonorBadge;
- (void)setLiveRoleSet:;
- (id)basicSet;
- (id)buildItems:;
- (id)extraTrackParmaWithBaseItems:;
- (id)honorBadgeSet;
- (id)liveRoleSet;
- (id)mergeBasicIdentity;
- (id)mergeLiveRole;
- (void)registerTagClass:category:;
- (void)setBasicSet:;
- (void)setHonorBadgeSet:;
- (id)tagCombined;
- (id)tagItemsByApplyedUser:;
- (id)tagItemsByInviteUser:;
- (id)init;
- (void).cxx_destruct;
@end
