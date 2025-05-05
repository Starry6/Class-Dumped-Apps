@interface IESLiveSaaSPBHostTeamGetTeamRoomInfoByTeamIDResponse_Data : GPBMessage
@property (nonatomic) IESLiveSaaSPBHostTeamHostTeamRoomInfo roomTeamInfo;
@property (nonatomic) BOOL hasRoomTeamInfo;
@property (nonatomic) GPBInt64Int64Dictionary roomQuizInfo;
@property (nonatomic) Q roomQuizInfo_Count;
@property (nonatomic) BOOL isActivityAccount;
+ (id)descriptor;
@end
