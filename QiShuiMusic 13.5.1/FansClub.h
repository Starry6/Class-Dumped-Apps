@interface FansClub : IESLivePBBaseMessage
@property (nonatomic) q totalFansCount;
@property (nonatomic) FansClub_FansClubData data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) GPBInt32ObjectDictionary preferData;
@property (nonatomic) Q preferData_Count;
@property (nonatomic) NSString totalFansCountStr;
@property (nonatomic) NSString totalFansCountSubstr;
- (id)currentRoomData;
- (id)presonalProfile;
- (id)displayData;
- (id)otherRoom;
+ (id)descriptor;
@end
