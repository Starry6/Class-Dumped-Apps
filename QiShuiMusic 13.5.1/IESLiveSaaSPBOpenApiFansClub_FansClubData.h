@interface IESLiveSaaSPBOpenApiFansClub_FansClubData : GPBMessage
@property (nonatomic) NSString clubName;
@property (nonatomic) NSInteger level;
@property (nonatomic) NSInteger userFansClubStatus;
@property (nonatomic) IESLiveSaaSPBOpenApiFansClub_FansClubData_UserBadge badge;
@property (nonatomic) BOOL hasBadge;
@property (nonatomic) GPBInt64Array availableGiftIdsArray;
@property (nonatomic) Q availableGiftIdsArray_Count;
@property (nonatomic) q anchorId;
+ (id)descriptor;
@end
