@interface IESLiveLinkMicAudienceInviteResponse_NoticeInfo : IESLivePBBaseMessage
@property (nonatomic) q userId;
@property (nonatomic) BOOL needPush;
@property (nonatomic) q appId;
@property (nonatomic) NSString action;
+ (id)descriptor;
@end
