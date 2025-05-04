@interface AWEIMFansAndRecommendCacheModel : NSObject
@property (nonatomic) NSNumber followStatus;
@property (nonatomic) NSNumber followerStatus;
@property (nonatomic) NSNumber followerRequestStatus;
@property (nonatomic) NSNumber hideMyPostStatus;
@property (nonatomic) NSNumber hideHerPostStatus;
@property (nonatomic) NSNumber hasClickLightInteraction;
@property (nonatomic) NSNumber removedNotice;
@property (nonatomic) NSNumber enableEditAlias;
- (id)followStatus;
- (void)setFollowStatus:;
- (id)hideHerPostStatus;
- (void)setHideHerPostStatus:;
- (id)followerStatus;
- (void)setFollowerStatus:;
- (id)followerRequestStatus;
- (void)setEnableEditAlias:;
- (void)setFollowerRequestStatus:;
- (id)hideMyPostStatus;
- (void)setHideMyPostStatus:;
- (id)enableEditAlias;
- (id)hasClickLightInteraction;
- (void)setHasClickLightInteraction:;
- (id)removedNotice;
- (void)setRemovedNotice:;
- (void).cxx_destruct;
@end
