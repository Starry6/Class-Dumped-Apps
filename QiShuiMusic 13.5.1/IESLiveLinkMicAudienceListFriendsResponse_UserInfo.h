@interface IESLiveLinkMicAudienceListFriendsResponse_UserInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) BOOL isActive;
+ (id)descriptor;
@end
