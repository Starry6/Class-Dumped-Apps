@interface HTSLiveUser_FansClub_FansClubData_UserBadge : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage preferIcon;
@property (nonatomic) HTSLiveImage subscribeIcon;
@property (nonatomic) GPBInt32ObjectDictionary icons;
@property (nonatomic) Q icons_Count;
@property (nonatomic) NSString title;
- (id)preferIcon;
- (id)subscribeIcon;
+ (id)descriptor;
@end
