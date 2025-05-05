@interface IESLiveLinkMicAudienceUserSearchResponse_ListUser : IESLivePBBaseMessage
@property (nonatomic) NSInteger searchType;
@property (nonatomic) IESLiveWaitingListUser waitingUser;
@property (nonatomic) BOOL hasWaitingUser;
@property (nonatomic) IESLiveLinkMicAudienceListResponse_ListUser inviteUser;
@property (nonatomic) BOOL hasInviteUser;
+ (id)descriptor;
@end
