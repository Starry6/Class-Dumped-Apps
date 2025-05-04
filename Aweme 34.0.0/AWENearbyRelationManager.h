@interface AWENearbyRelationManager : NSObject
- (void)increaseRelationCardShowedCount;
- (void)trackShowFreshFollowCardWithCandidateModel:;
- (void)resetRelationCardShowedCount;
- (void)trackClickFreshFollowCardWithCandidateModel:;
- (id)__relationCardShowedCountKey;
- (long long)__relationCardUnclickThreshold;
- (void)__trackFreshFollowCardWithCandidateModel:isClickEvent:;
- (BOOL)shouldShowRelationCard;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
