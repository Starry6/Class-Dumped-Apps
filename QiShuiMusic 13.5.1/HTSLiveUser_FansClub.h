@interface HTSLiveUser_FansClub : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser_FansClub_FansClubData displayData;
@property (nonatomic) HTSLiveUser_FansClub_FansClubData currentRoomData;
@property (nonatomic) HTSLiveUser_FansClub_FansClubData presonalProfile;
@property (nonatomic) HTSLiveUser_FansClub_FansClubData otherRoom;
@property (nonatomic) HTSLiveUser_FansClub_FansClubData data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) GPBInt32ObjectDictionary preferData;
@property (nonatomic) Q preferData_Count;
- (id)currentRoomData;
- (id)presonalProfile;
- (id)displayData;
- (id)otherRoom;
+ (id)descriptor;
@end
