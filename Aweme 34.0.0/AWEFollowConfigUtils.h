@interface AWEFollowConfigUtils : NSObject
+ (id)followButtonTitleWithUser:scene:;
+ (id)followButtonTitleWithFollowStatus:followerStatus:scene:;
+ (id)_followButtonTitleForFollowStatus:followerStatus:;
+ (id)_getFollowUserButtonConfig;
+ (id)_followButtonTitleIconForFollowStatus:followerStatus:;
@end
