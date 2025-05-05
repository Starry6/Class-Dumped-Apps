@interface IESLiveLinkMicAudienceLeaveResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) q modifyTime;
@property (nonatomic) NSInteger linkStatus;
@property (nonatomic) NSInteger linkType;
@property (nonatomic) NSInteger roleType;
@property (nonatomic) q userPosition;
@property (nonatomic) NSInteger silenceStatus;
@property (nonatomic) NSString linkmicIdStr;
@property (nonatomic) q linkmicId;
@property (nonatomic) q fanTicket;
@property (nonatomic) NSInteger controlType;
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) Q linkedUsersArray_Count;
@property (nonatomic) Q version;
@property (nonatomic) q totalApply;
@property (nonatomic) q totalLinked;
@property (nonatomic) q paidCount;
@property (nonatomic) q linkDuration;
@property (nonatomic) IESLiveLinkMicAudienceLeaveResponse_UserInfoDuringLinkmic userinfoDuringLinkmic;
@property (nonatomic) BOOL hasUserinfoDuringLinkmic;
+ (id)descriptor;
@end
