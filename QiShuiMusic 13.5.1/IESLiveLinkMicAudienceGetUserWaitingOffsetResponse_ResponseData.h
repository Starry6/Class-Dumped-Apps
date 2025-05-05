@interface IESLiveLinkMicAudienceGetUserWaitingOffsetResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) q offset;
@property (nonatomic) NSString prompt;
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) q totalCount;
@property (nonatomic) NSMutableArray waitingUsersArray;
@property (nonatomic) Q waitingUsersArray_Count;
@property (nonatomic) HTSLiveJoinTeamfightInfo joinTeamfightInfo;
@property (nonatomic) BOOL hasJoinTeamfightInfo;
+ (id)descriptor;
@end
