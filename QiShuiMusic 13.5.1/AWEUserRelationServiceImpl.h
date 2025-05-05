@interface AWEUserRelationServiceImpl : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)approve:completion:;
+ (void)block:completion:;
+ (id)convertUserGenderType:showGenderStrategy:;
+ (void)follow:completion:;
+ (void)hideHerPost:completion:;
+ (void)reject:completion:;
+ (void)rejectWithNotice:userID:completion:;
+ (void)removeFans:completion:;
+ (void)topFollowingUser:completion:;
+ (void)unblock:completion:;
+ (void)unfollow:completion:;
+ (void)unhideHerPost:completion:;
+ (void)untopFollowingUser:completion:;
@end
