@interface HTSLiveUser_FansClub_FansClubData : IESLivePBBaseMessage
@property (nonatomic) NSString clubName;
@property (nonatomic) NSInteger level;
@property (nonatomic) NSInteger userFansClubStatus;
@property (nonatomic) HTSLiveUser_FansClub_FansClubData_UserBadge badge;
@property (nonatomic) BOOL hasBadge;
@property (nonatomic) NSString anchorOpenId;
@property (nonatomic) NSString anchorUnionId;
@property (nonatomic) NSInteger badgeType;
@property (nonatomic) GPBInt64Array availableGiftIdsArray;
@property (nonatomic) Q availableGiftIdsArray_Count;
+ (id)descriptor;
@end
