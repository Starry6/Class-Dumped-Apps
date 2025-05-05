@interface AWEUserProfileInfoServiceIMP : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)getNewRecommendFriendCountWithCompletion:;
+ (void)getNewRecommendFriendCountWithContext:completion:;
+ (void)getUserIDInfoWithUniqueID:completion:;
+ (void)getUserProfileWithID:cacheStrategy:cacheMaxAge:extraParams:detailCompletion:;
+ (void)getUserProfileWithID:completion:;
+ (void)getUserProfileWithID:detailCompletion:;
+ (void)resetUserRecommendCount;
+ (long long)userRecommendCount;
@end
