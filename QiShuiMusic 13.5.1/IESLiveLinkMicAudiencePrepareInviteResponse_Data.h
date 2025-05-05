@interface IESLiveLinkMicAudiencePrepareInviteResponse_Data : IESLivePBBaseMessage
@property (nonatomic) BOOL userInRoom;
@property (nonatomic) IESLiveLinkMicAudiencePrepareInviteResponse_NoticeInfo noticeInfo;
@property (nonatomic) BOOL hasNoticeInfo;
+ (id)descriptor;
@end
