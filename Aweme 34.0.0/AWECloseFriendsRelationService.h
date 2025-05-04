@interface AWECloseFriendsRelationService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateFamiliarSettings:fromRequest:;
- (BOOL)enableCloseFriendsRelationUpgrade;
- (Class)closeFriendsRelationTracker;
- (id)closeFriendsList;
- (id)closeFriendsState;
- (id)onboardingHelper;
@end
