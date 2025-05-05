@interface IESLiveListUserExtra : IESLivePBBaseMessage
@property (nonatomic) q fanTicket;
@property (nonatomic) BOOL hostPermission;
@property (nonatomic) q appId;
@property (nonatomic) q clientVersion;
@property (nonatomic) NSString devicePlatform;
@property (nonatomic) q joinChannelTime;
@property (nonatomic) q expectedLeaveTime;
@property (nonatomic) q currentTime;
@property (nonatomic) NSString fanTicketFuzzyStr;
@property (nonatomic) NSString fanTicketRealStr;
@property (nonatomic) GPBInt64Array rankContributorIdsArray;
@property (nonatomic) Q rankContributorIdsArray_Count;
@property (nonatomic) NSInteger listUserRole;
+ (id)descriptor;
@end
