@interface HTSLiveLinkmicStarWishBannerInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveLinkmicStarWishInfo starwishInfo;
@property (nonatomic) BOOL hasStarwishInfo;
@property (nonatomic) GPBInt64Array showUserIdsArray;
@property (nonatomic) Q showUserIdsArray_Count;
+ (id)descriptor;
@end
