@interface AWEConcernProfileRecommendCardAutoShowHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)autoShowProfileRecommendCardAfterFollow;
+ (BOOL)autoShowProfileRecommendCardWhenUserInFollowStatus;
+ (unsigned long long)autoShowProfileRecommendCardType;
+ (BOOL)autoShowProfileRecommendCardAfterFollowFromAvatar;
+ (id)originAwemeWithAweme:inViewController:;
@end
