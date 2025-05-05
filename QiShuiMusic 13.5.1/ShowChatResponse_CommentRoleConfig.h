@interface ShowChatResponse_CommentRoleConfig : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) HTSLiveImage avatar;
@property (nonatomic) BOOL hasAvatar;
@property (nonatomic) q roleId;
+ (id)descriptor;
@end
