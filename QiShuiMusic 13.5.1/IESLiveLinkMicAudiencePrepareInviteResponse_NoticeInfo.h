@interface IESLiveLinkMicAudiencePrepareInviteResponse_NoticeInfo : IESLivePBBaseMessage
@property (nonatomic) NSString openId;
@property (nonatomic) BOOL needPush;
@property (nonatomic) q appId;
@property (nonatomic) NSString action;
+ (id)descriptor;
@end
