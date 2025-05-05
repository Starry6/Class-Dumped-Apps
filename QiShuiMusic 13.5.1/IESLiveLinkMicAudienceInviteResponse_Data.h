@interface IESLiveLinkMicAudienceInviteResponse_Data : IESLivePBBaseMessage
@property (nonatomic) GPBInt64Array invitedUserIdListArray;
@property (nonatomic) Q invitedUserIdListArray_Count;
@property (nonatomic) NSMutableArray noticeInfosArray;
@property (nonatomic) Q noticeInfosArray_Count;
@property (nonatomic) NSString remoteLinkerSessionId;
+ (id)descriptor;
@end
