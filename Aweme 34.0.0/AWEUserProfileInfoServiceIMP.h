@interface AWEUserProfileInfoServiceIMP : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)getUserProfileFrequencyInfoWithCompletion:;
+ (void)getUserProfileWithID:completion:;
+ (void)getUserProfileWithID:detailCompletion:;
+ (void)getUserProfileWithID:cacheStrategy:cacheMaxAge:extraParams:detailCompletion:;
+ (void)getUserProfileWithSecUid:completion:;
+ (void)getUserProfileWithSecUid:detailCompletion:;
+ (void)getUserProfileWithSecUid:cacheStrategy:cacheMaxAge:extraParams:detailCompletion:;
+ (void)getUserProfileWithID:secUid:cacheStrategy:cacheMaxAge:extraParams:detailCompletion:;
+ (void)getUserIDInfoWithUniqueID:completion:;
+ (void)checkStarHitRankNoticeWithStarUID:completion:;
@end
