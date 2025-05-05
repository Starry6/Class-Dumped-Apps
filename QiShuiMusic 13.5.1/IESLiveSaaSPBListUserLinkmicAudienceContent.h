@interface IESLiveSaaSPBListUserLinkmicAudienceContent : GPBMessage
@property (nonatomic) q fanTicket;
@property (nonatomic) BOOL hostPermission;
@property (nonatomic) q appId;
@property (nonatomic) q clientVersion;
@property (nonatomic) NSString devicePlatform;
@property (nonatomic) q joinChannelTime;
@property (nonatomic) q expectedLeaveTime;
@property (nonatomic) BOOL inWaitingList;
@property (nonatomic) NSString extra;
@property (nonatomic) q currentTime;
@property (nonatomic) NSString fanTicketFuzzyStr;
@property (nonatomic) NSInteger listUserRole;
@property (nonatomic) NSString fanTicketRealStr;
@property (nonatomic) GPBInt64Array rankContributorIdsArray;
@property (nonatomic) Q rankContributorIdsArray_Count;
@property (nonatomic) q paidCount;
@property (nonatomic) BOOL isEnlarged;
@property (nonatomic) q selfDisciplineDuration;
@property (nonatomic) BOOL isAnonymous;
@property (nonatomic) NSInteger applyType;
@property (nonatomic) NSMutableArray rankContributorOpenIdsArray;
@property (nonatomic) Q rankContributorOpenIdsArray_Count;
+ (id)descriptor;
@end
